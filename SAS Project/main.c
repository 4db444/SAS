#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#define WIDTH 100

typedef struct {
    int day;
    int month; 
    int year;
} Date;

typedef struct {
    int id;
    char nom[30];
    int number;
    char position[15];
    int age;
    int goals;
    Date inscription_date;
} Player;

void trim(char string[]){
    int i = 0;

    while (string[i] == ' ') i++;

    if (i  > 0){
        int j = 0;
        while (string[j] == ' ') string[j++] = string[i++];
    }

    int l = strlen(string);
    while (l > 0 && string[l - 1] == ' '){
        string[l - 1] = '\0';
        l--;
    }
}

void print_header (char title[]){
    int half_width = (WIDTH - strlen(title) ) / 2;

    printf("+");
    for(int i = 0; i < half_width - 1; i++) printf("-");
    printf("%s", title);
    for(int i = 0; i < WIDTH - strlen(title) - half_width - 1; i++) printf("-");
    printf("+\n");
}

void print_in_center (char string[], int width){
    int half_width = (width - strlen(string) ) / 2;

    for(int i = 0; i < half_width; i++) printf(" ");
    printf("%s", string);
    for(int i = 0; i < width - strlen(string) - half_width; i++) printf(" ");
}

void print_line (char string[]){
    printf("|");
    printf("%s", string);
    for(int i = 0; i < WIDTH - strlen(string) - 2; i++) printf(" ");
    printf("|\n");

}

// void break_down (char name[], char email[], char phone[]){
//     print_header("");
    
//     printf("|Name   | "); 
//     printf("%s", name);
//     for (int i = 0; i < width - 10 - strlen(name) - 1; i++) printf(" ");
//     printf("|\n");
//     print_header("");
    
//     printf("|Email  | ");
//     printf("%s", email);
//     for (int i = 0; i < width - 10 - strlen(email) - 1; i++) printf(" ");
//     printf("|\n");
//     print_header("");
    
//     printf("|Phone  | ");
//     printf("%s", phone);
//     for (int i = 0; i < width - 10 - strlen(phone) - 1; i++) printf(" ");
//     printf("|\n");

//     print_header("");
// }

// void show_all (struct Contact contacts [], int index){
//     printf("+");
//     for(int i = 0; i < 30; i++) printf("-");
//     printf("+");
//     for(int i = 0; i < 36; i++) printf("-");
//     printf("+");
//     for(int i = 0; i < 10; i++) printf("-");
//     printf("+\n");

//     printf("|");

//     for(int i = 0; i < (30 - 4) / 2; i++ )printf(" ");
//     printf("Name");
//     for(int i = 0; i < ((30 - 4) / 2) + (30 - 4) % 2; i++ )printf(" ");
    
//     printf("|");
    
//     for(int i = 0; i < (36 - 5) / 2; i++ )printf(" ");
//     printf("Email");
//     for(int i = 0; i < ((36 - 5) / 2) + (36 - 5) % 2; i++ )printf(" ");

//     printf("|");
    
//     for(int i = 0; i < (10 - 5) / 2; i++ )printf(" ");
//     printf("Phone");
//     for(int i = 0; i < ((10 - 5) / 2) + (10 - 5) % 2; i++ )printf(" ");

//     printf("|\n");

//     printf("+");
//     for(int i = 0; i < 30; i++) printf("-");
//     printf("+");
//     for(int i = 0; i < 36; i++) printf("-");
//     printf("+");
//     for(int i = 0; i < 10; i++) printf("-");
//     printf("+\n");

//     for(int i = 0; i < index ; i++){
//         printf("|");

//         for(int j = 0; j < (30 - strlen(contacts[i].name)) / 2; j++ )printf(" ");
//         printf("%s", contacts[i].name);
//         for(int j = 0; j < ((30 - strlen(contacts[i].name)) / 2) + (30 - strlen(contacts[i].name)) % 2; j++ )printf(" ");
        
//         printf("|");
        
//         for(int j = 0; j < (36 - strlen(contacts[i].email)) / 2; j++ )printf(" ");
//         printf("%s", contacts[i].email);
//         for(int j = 0; j < ((36 - strlen(contacts[i].email)) / 2) + (36 - strlen(contacts[i].email)) % 2; j++ )printf(" ");

//         printf("|");
        
//         printf("%s", contacts[i].phone);

//         printf("|\n");
        
//         if(i == index - 1) {
//             print_header("");
//             break;
//         }

//         printf("+");
//         for(int i = 0; i < 30; i++) printf("-");
//         printf("+");
//         for(int i = 0; i < 36; i++) printf("-");
//         printf("+");
//         for(int i = 0; i < 10; i++) printf("-");
//         printf("+\n");
//     }
// }

int main (){

    Player players[] = {};
    int choice = 0;
    bool is_running = true;

    print_in_center("Welcome To Team Managing App", WIDTH);

    printf("\n\n");
    
    while (is_running){
        
        print_header(" Menu ");
        print_line(" 1. Add a player.");
        print_line(" 2. Show all players.");
        print_line(" 3. Update a player.");
        print_line(" 4. Delete a player.");
        print_line(" 5. Search for a player.");
        print_line(" 6. Show statistics.");
        print_header("");

        printf("choose your option by the associated number: ");
        scanf("%d", &choice); 
        getchar();

        system("clear");
        switch (choice) {
            case 1 : 
            
            break;
            case 2 : 
            printf("2");
            break;
            case 3 : 
            printf("3");
            break;
            case 4 : 
            printf("4");
            break;
            case 5 : 
            printf("5");
            break;
            case 6 : 
                printf("6");
                break;
            case 7 : 
                printf("7");
                break;
            default : 
                print_header(" 404 ");
                printf("\n\n");
                print_in_center("OOPS, looks like there is not matching option :(", WIDTH);
                printf("\n\n\nHit Enter to continue ;)\n");
                getchar();
                getchar();
        }
        choice = 0;
        system("clear");
    }
    

    
    return 0;
}