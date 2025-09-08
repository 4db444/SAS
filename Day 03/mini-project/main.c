#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define width 80

struct Contact {
    char name[31];
    char email[31];
    char phone[11];
};

bool is_valid_phone (char phone[11]){
    if(strlen(phone) == 10 && phone[0] == '0' && (phone[1] == '6' || phone[1] == '7')) return true;
    return false;
}

bool is_valid_email (char email[30]){
    int at_index = 0;
    int dot_index = 0;

    for (int i = 0; i < strlen(email); i++){
        if(email[i] == '.'){
            dot_index = i;
            continue;
        }

        if(email[i] == '@'){
            at_index = i;
            continue;
        }
    }

    if(dot_index > at_index + 4 && dot_index < strlen(email) - 1 && at_index > 3) return true;
    return false;
}

void print_header (char title[]){
    int half_width = (width - strlen(title) ) / 2;

    printf("+");
    for(int i = 0; i < half_width - 1; i++) printf("-");
    printf("%s", title);
    for(int i = 0; i < width - strlen(title) - half_width - 1; i++) printf("-");
    printf("+\n");
}

void print_line (char string[]){
    printf("|");
    printf("%s", string);
    for(int i = 0; i < width - strlen(string) - 2; i++) printf(" ");
    printf("|\n");

}

void break_down (char name[], char email[], char phone[]){
    print_header("");
    
    printf("|Name   | "); 
    printf("%s", name);
    for (int i = 0; i < width - 10 - strlen(name) - 1; i++) printf(" ");
    printf("|\n");
    print_header("");
    
    printf("|Email  | ");
    printf("%s", email);
    for (int i = 0; i < width - 10 - strlen(email) - 1; i++) printf(" ");
    printf("|\n");
    print_header("");
    
    printf("|Phone  | ");
    printf("%s", phone);
    for (int i = 0; i < width - 10 - strlen(phone) - 1; i++) printf(" ");
    printf("|\n");

    print_header("");
}

void show_all (struct Contact contacts [], int index){
    printf("+");
    for(int i = 0; i < 30; i++) printf("-");
    printf("+");
    for(int i = 0; i < 36; i++) printf("-");
    printf("+");
    for(int i = 0; i < 10; i++) printf("-");
    printf("+\n");

    printf("|");

    for(int i = 0; i < (30 - 4) / 2; i++ )printf(" ");
    printf("Name");
    for(int i = 0; i < ((30 - 4) / 2) + (30 - 4) % 2; i++ )printf(" ");
    
    printf("|");
    
    for(int i = 0; i < (36 - 5) / 2; i++ )printf(" ");
    printf("Email");
    for(int i = 0; i < ((36 - 5) / 2) + (36 - 5) % 2; i++ )printf(" ");

    printf("|");
    
    for(int i = 0; i < (10 - 5) / 2; i++ )printf(" ");
    printf("Phone");
    for(int i = 0; i < ((10 - 5) / 2) + (10 - 5) % 2; i++ )printf(" ");

    printf("|\n");

    printf("+");
    for(int i = 0; i < 30; i++) printf("-");
    printf("+");
    for(int i = 0; i < 36; i++) printf("-");
    printf("+");
    for(int i = 0; i < 10; i++) printf("-");
    printf("+\n");

    for(int i = 0; i < index ; i++){
        printf("|");

        for(int j = 0; j < (30 - strlen(contacts[i].name)) / 2; j++ )printf(" ");
        printf("%s", contacts[i].name);
        for(int j = 0; j < ((30 - strlen(contacts[i].name)) / 2) + (30 - strlen(contacts[i].name)) % 2; j++ )printf(" ");
        
        printf("|");
        
        for(int j = 0; j < (36 - strlen(contacts[i].email)) / 2; j++ )printf(" ");
        printf("%s", contacts[i].email);
        for(int j = 0; j < ((36 - strlen(contacts[i].email)) / 2) + (36 - strlen(contacts[i].email)) % 2; j++ )printf(" ");

        printf("|");
        
        printf("%s", contacts[i].phone);

        printf("|\n");
        
        if(i == index - 1) {
            print_header("");
            break;
        }

        printf("+");
        for(int i = 0; i < 30; i++) printf("-");
        printf("+");
        for(int i = 0; i < 36; i++) printf("-");
        printf("+");
        for(int i = 0; i < 10; i++) printf("-");
        printf("+\n");
    }
}

int find_contact (struct Contact contacts [], int index, char name[]) {
    for(int i = 0; i < index; i++){
        if(strcmp(contacts[i].name, name) == 0) return i;
    }
    return -1;
}

int main (){
    struct Contact contacts[100] = {0};
    int index = 0;
    int founded_index = -1;
    char name[31] = "";
    bool is_running = true;
    int choice = 0;

    printf("\t\t\tWelcom To The Contact Manager App\n\n");
    while (is_running){

        print_header(" Menu ");
        print_line(" 1. Add a contact. ");
        print_line(" 2. Edit a contact. ");
        print_line(" 3. Delete a contact. ");
        print_line(" 4. Show all contacts. ");
        print_line(" 5. Search for a contact. ");
        print_line(" 6. Exit :( ");
        print_header("");

        printf("Enter your option with the associated number: ");
        scanf("%d", &choice);

        getchar();
        system("clear");
        switch (choice){
            case 1 :
                struct Contact contact = {0};

                print_header(" Adding Page ");

                do{
                    print_line(" Enter the contact name: ");
                    printf("--> ");
                    fgets(contact.name, 31, stdin);
                    contact.name[strlen(contact.name) - 1] = '\0';
                } while (strlen(contact.name) < 3);
                
                do{
                    print_line("Enter the contact Email: ");
                    printf("--> ");
                    scanf("%30s", contact.email);
                }while(! is_valid_email(contact.email));
                
                do{
                    print_line("Enter the contact phone number: ");
                    printf("--> ");
                    scanf("%s", contact.phone);
                }while(! is_valid_phone(contact.phone));

                contacts[index] = contact;
                index++;

                printf("\n");
                print_header("");

                print_line("Record Added Successfully !");

                break_down(contact.name, contact.email, contact.phone);

                printf("Hit enter to continue ;)");
                getchar();
                getchar();
                break;
            case 2 : 
                print_header(" Update Contact ");
                show_all(contacts, index);
                printf("Enter the contact name to update: ");
                fgets(name, 31, stdin);
                name[strlen(name) - 1] = '\0';
                printf("Searching...\n");

                
                founded_index = find_contact(contacts, index, name); 

                if(founded_index >= 0){
                    char new_email[31] = "";
                    char new_phone[31] = "";

                    printf("The contact founded !\n");
                    break_down(contacts[founded_index].name, contacts[founded_index].email, contacts[founded_index].phone);

                    while (true){
                        printf("Enter a new email: ");
                        scanf("%s", new_email);

                        if(is_valid_email(new_email)){
                            strcpy(contacts[founded_index].email, new_email);
                            break;
                        }else{
                            printf("'%s' is not a valide email, please try again !\n", new_email);
                        }
                    }

                    while (true){
                        printf("Enter a new phone: ");
                        scanf("%s", new_phone);

                        if(is_valid_phone(new_phone)){
                            strcpy(contacts[founded_index].phone, new_phone);
                            break;
                        }else{
                            printf("'%s' is not a valide phone, please try again !\n\n", new_phone);
                        }
                    }

                    print_header(" Your record have been updated successfully, here is a break down ! ");

                    break_down(contacts[founded_index].name, contacts[founded_index].email, contacts[founded_index].phone);

                    getchar();
                }else{
                    printf("Sorry! '%s' does not exists in this database !\n", name);
                }

                printf("Hit Enter to continue ;)\n");
                getchar();

                break;
            case 3 : 
                bool is_confirmed = false;
                char response[4] = "";
                
                print_header(" Delete Contact ");
                show_all(contacts, index);
                printf("Enter the contact name to delete: ");
                fgets(name, 31, stdin);
                name[strlen(name) - 1] = '\0';
                printf("Searching...\n");
                
                int founded_index = find_contact(contacts, index, name); 

                if(founded_index >= 0){
                    printf("The contact founded !\n");
                    break_down(contacts[founded_index].name, contacts[founded_index].email, contacts[founded_index].phone);

                    printf("Are you sure you want to delete this record ? (y/yes)");
                    scanf("%s", response);

                    if(strcmp(response, "yes") == 0 || strcmp(response, "y") == 0){
                        for(int i = founded_index; i <index; i++){
                            contacts[i] = contacts[i + 1];
                        }
                        index--;
                        printf("The contact deleted successfully !!\n");
                    }else{
                        printf("Your record is safe, be carefull !\n");
                    }
                    printf("Hit Enter to continue ;)");
                    getchar();
                }else{
                    printf("Sorry! '%s' does not exist !!\n", name);
                }
                getchar();
                break;
            case 4 : 
                if(index == 0){
                    printf("The list now is empty, add some then come back :)");
                }else{
                    print_header(" All Contacts ");
                    show_all(contacts, index);
                }
                printf("Hit enter to continue ;)");
                getchar();
                break;
            case 5 : 
                print_header(" Search Contact ");
                printf("Enter the contact name to look for: ");
                fgets(name, 31, stdin);
                name[strlen(name) - 1] = '\0';
                printf("Searching...\n");
                
                founded_index = find_contact(contacts, index, name); 

                if(founded_index >= 0){
                    printf("Contact founded\n");
                    break_down(contacts[founded_index].name, contacts[founded_index].email, contacts[founded_index].phone);
                }else{
                    printf("Sorry ! '%s' does not exists !", name);
                }

                printf("Hit Enter to continue ;)");
                getchar();
                break;
            case 6 : 
                is_running = false;
                break;
            default: 
                printf("Please enter a valide choice !!!\n");
                getchar();
        }
        system("clear");
    }
    printf("by :(\n");
    return 0;
}