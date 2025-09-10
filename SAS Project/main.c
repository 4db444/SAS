#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#define WIDTH 100
#define ID_WIDTH 7
#define FIRST_NAME_WIDTH 25
#define LAST_NAME_WIDTH 25
#define NUMBER_WIDTH 6
#define AGE_WIDTH 5
#define POSITION_WIDTH 15
#define GOALS_WIDTH 9


typedef struct {
    int day;
    int month; 
    int year;
} Date;

typedef struct {
    int id;
    char first_name[30];
    char last_name[30];
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

void break_down (Player player){
    char id [20] = "";
    char age [20] = "";
    char goals [20] = "";

    sprintf(id, "%d", player.id);
    sprintf(age, "%d", player.age);
    sprintf(goals, "%d", player.goals);

    print_header("");
    
    printf("|ID         | "); 
    printf("%s", id);
    for (int i = 0; i < WIDTH - 14 - strlen(id) - 1; i++) printf(" ");
    printf("|\n");
    print_header("");
    
    printf("|First Name | ");
    printf("%s", player.first_name);
    for (int i = 0; i < WIDTH - 14 - strlen(player.first_name) - 1; i++) printf(" ");
    printf("|\n");
    print_header("");
    
    printf("|Last Name  | ");
    printf("%s", player.last_name);
    for (int i = 0; i < WIDTH - 14 - strlen(player.last_name) - 1; i++) printf(" ");
    printf("|\n");
    print_header("");

    printf("|Number     | ");
    printf("%02d", player.number);
    for (int i = 0; i < WIDTH - 14 - 2 - 1; i++) printf(" ");
    printf("|\n");
    print_header("");

    printf("|Position   | ");
    printf("%s", player.position);
    for (int i = 0; i < WIDTH - 14 - strlen(player.position) - 1; i++) printf(" ");
    printf("|\n");
    print_header("");

    printf("|Age        | ");
    printf("%02d", player.age);
    for (int i = 0; i < WIDTH - 14 - 2 - 1; i++) printf(" ");
    printf("|\n");
    print_header("");

    printf("|Goals      | ");
    printf("%s", goals);
    for (int i = 0; i < WIDTH - 14 - strlen(goals) - 1; i++) printf(" ");
    printf("|\n");

    print_header("");
}

void show_all (Player players [], int index){
    printf("+");
    for(int i = 0; i < ID_WIDTH; i++) printf("-");
    printf("+");
    for(int i = 0; i < FIRST_NAME_WIDTH; i++) printf("-");
    printf("+");
    for(int i = 0; i < LAST_NAME_WIDTH; i++) printf("-");
    printf("+");
    for(int i = 0; i < NUMBER_WIDTH; i++) printf("-");
    printf("+");
    for(int i = 0; i < POSITION_WIDTH; i++) printf("-");
    printf("+");
    for(int i = 0; i < AGE_WIDTH; i++) printf("-");
    printf("+");
    for(int i = 0; i < GOALS_WIDTH; i++) printf("-");
    printf("+\n");

    printf("|");

    for(int i = 0; i < (ID_WIDTH - 2) / 2; i++ )printf(" ");
    printf("ID");
    for(int i = 0; i < ((ID_WIDTH - 2) / 2) + (ID_WIDTH - 2) % 2; i++ )printf(" ");
    
    printf("|");
    
    for(int i = 0; i < (FIRST_NAME_WIDTH - 10) / 2; i++ )printf(" ");
    printf("First Name");
    for(int i = 0; i < ((FIRST_NAME_WIDTH - 10) / 2) + (FIRST_NAME_WIDTH - 10) % 2; i++ )printf(" ");
    
    printf("|");
    
    for(int i = 0; i < (LAST_NAME_WIDTH - 9) / 2; i++ )printf(" ");
    printf("Last Name");
    for(int i = 0; i < ((LAST_NAME_WIDTH - 9) / 2) + (LAST_NAME_WIDTH - 9) % 2; i++ )printf(" ");
    
    printf("|");
    
    for(int i = 0; i < (NUMBER_WIDTH - 6) / 2; i++ )printf(" ");
    printf("Number");
    for(int i = 0; i < ((NUMBER_WIDTH - 6) / 2) + (NUMBER_WIDTH - 6) % 2; i++ )printf(" ");
    
    printf("|");
    
    for(int i = 0; i < (POSITION_WIDTH - 8) / 2; i++ )printf(" ");
    printf("Position");
    for(int i = 0; i < ((POSITION_WIDTH - 8) / 2) + (POSITION_WIDTH - 8) % 2; i++ )printf(" ");
    
    printf("|");
    
    for(int i = 0; i < (AGE_WIDTH - 3) / 2; i++ )printf(" ");
    printf("Age");
    for(int i = 0; i < ((AGE_WIDTH - 3) / 2) + (AGE_WIDTH - 3) % 2; i++ )printf(" ");
    
    printf("|");
    
    for(int i = 0; i < (GOALS_WIDTH - 5) / 2; i++ )printf(" ");
    printf("Goals");
    for(int i = 0; i < ((GOALS_WIDTH - 5) / 2) + (GOALS_WIDTH - 5) % 2; i++ )printf(" ");

    printf("|\n");

    printf("+");
    for(int i = 0; i < ID_WIDTH; i++) printf("-");
    printf("+");
    for(int i = 0; i < FIRST_NAME_WIDTH; i++) printf("-");
    printf("+");
    for(int i = 0; i < LAST_NAME_WIDTH; i++) printf("-");
    printf("+");
    for(int i = 0; i < NUMBER_WIDTH; i++) printf("-");
    printf("+");
    for(int i = 0; i < POSITION_WIDTH; i++) printf("-");
    printf("+");
    for(int i = 0; i < AGE_WIDTH; i++) printf("-");
    printf("+");
    for(int i = 0; i < GOALS_WIDTH; i++) printf("-");
    printf("+\n");

    for(int i = 0; i < index ; i++){
        char id [20] = "";
        char goals [20] = "";

        sprintf(id, "%d", players[i].id);
        sprintf(goals, "%d", players[i].goals);

        printf("|");

        for(int j = 0; j < (ID_WIDTH - strlen(id)) / 2; j++ )printf(" ");                   
        printf("%s", id);
        for(int j = 0; j < ((ID_WIDTH - strlen(id)) / 2) + (ID_WIDTH - strlen(id)) % 2; j++ )printf(" ");
        
        printf("|");
        
        for(int j = 0; j < (FIRST_NAME_WIDTH - strlen(players[i].first_name)) / 2; j++ )printf(" ");
        printf("%s", players[i].first_name);
        for(int j = 0; j < (FIRST_NAME_WIDTH - strlen(players[i].first_name)) / 2 + (FIRST_NAME_WIDTH - strlen(players[i].first_name)) % 2; j++ )printf(" ");
        
        printf("|");
        
        for(int j = 0; j < (LAST_NAME_WIDTH - strlen(players[i].last_name)) / 2; j++ )printf(" ");
        printf("%s", players[i].last_name);
        for(int j = 0; j < (LAST_NAME_WIDTH - strlen(players[i].last_name)) / 2 + (LAST_NAME_WIDTH - strlen(players[i].last_name)) % 2; j++ )printf(" ");
        
        printf("|");
        
        for(int j = 0; j < (NUMBER_WIDTH - 2) / 2; j++ )printf(" ");
        printf("%02d", players[i].number);
        for(int j = 0; j < ((NUMBER_WIDTH - 2) / 2) + (NUMBER_WIDTH - 2) % 2; j++ )printf(" ");
        
        printf("|");
        
        for(int j = 0; j < (POSITION_WIDTH - strlen(players[i].position)) / 2; j++ )printf(" ");
        printf("%s", players[i].position);
        for(int j = 0; j < ((POSITION_WIDTH - strlen(players[i].position)) / 2) + (POSITION_WIDTH - strlen(players[i].position)) % 2; j++ )printf(" ");

        printf("|");
        
        for(int j = 0; j < (AGE_WIDTH - 2) / 2; j++ )printf(" ");
        printf("%02d", players[i].age);
        for(int j = 0; j < ((AGE_WIDTH - 2) / 2) + (AGE_WIDTH - 2) % 2; j++ )printf(" ");

        printf("|");
        
        for(int j = 0; j < (GOALS_WIDTH - strlen(goals)) / 2; j++ )printf(" ");
        printf("%s", goals);
        for(int j = 0; j < ((GOALS_WIDTH - strlen(goals)) / 2) + (GOALS_WIDTH - strlen(goals)) % 2; j++ )printf(" ");

        printf("|\n");
        
        if(i == index - 1) {
            print_header("");
            break;
        }

        printf("+");
        for(int i = 0; i < ID_WIDTH; i++) printf("-");
        printf("+");
        for(int i = 0; i < FIRST_NAME_WIDTH; i++) printf("-");
        printf("+");
        for(int i = 0; i < LAST_NAME_WIDTH; i++) printf("-");
        printf("+");
        for(int i = 0; i < NUMBER_WIDTH; i++) printf("-");
        printf("+");
        for(int i = 0; i < POSITION_WIDTH; i++) printf("-");
        printf("+");
        for(int i = 0; i < AGE_WIDTH; i++) printf("-");
        printf("+");
        for(int i = 0; i < GOALS_WIDTH; i++) printf("-");
        printf("+\n");
    }
}

bool is_validate_number(Player arr[], int n, int index){
    for (int i = 0; i < index; i++){
        if(arr[i].number == n) return 0;
    }
    return 1;
}

int main (){

    Player players[100] = {{1, "brahim", "hello", 10, "defender", 11, 11}};
    int ID = 2;
    int choice = 0;
    bool is_running = true;
    int index = 1;

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
                Player player = {0};
                bool is_inserting = true;
                int position_choice = 0;
                int inserting_choice = 0;

                while (is_inserting){
                    player.id = ID;
                    
                    system("clear");
                    print_header(" Adding Form ");
                    do{
                        printf("| Enter the player's first name: ");
                        scanf("%s", &player.first_name);
                    }while(strlen(player.first_name) < 2);

                    do{
                        printf("| Enter the player's last name: ");
                        scanf("%s", &player.last_name);
                    }while(strlen(player.last_name) < 2);
                    
                    do {
                        printf("| Enter the player's jercy number: ");
                        scanf("%d", &player.number);
                        getchar();
                        if(! is_validate_number(players, player.number, index)){
                            printf("|--> Number already exists !\n");
                            player.number = 0;
                        }
                    }while(player.number <= 0 || player.number >=100);

                    do{
                        printf("| Enter the player's position: \n");
                        printf("|\t1. Goalkeeper \n");
                        printf("|\t2. Defender \n");
                        printf("|\t3. Midfeilder \n");
                        printf("|\t4. Striker \n");
                        printf("|-----> ");
                        scanf("%d", &position_choice);
                        getchar();

                        switch (position_choice){
                            case 1 :
                                strcpy(player.position, "Goalkeeper");
                                break;
                            case 2 :
                                strcpy(player.position, "Defender");
                                break;
                            case 3 :
                                strcpy(player.position, "Midfeilder");
                                break;
                            case 4 :
                                strcpy(player.position, "Striker");
                                break;
                            default : 
                                printf("|-----> You must choose a number between 1 and 4.\n");
                        }
                    }while(position_choice > 4 || position_choice <= 0);

                    do{
                        printf("| Enter the player's Age: ");
                        scanf("%d", &player.age);
                        getchar();
                    }while (player.age <= 0 || player.age >= 100);

                    do{
                        printf("| Enter the player's Goals: ");
                        scanf("%d", &player.goals);
                        getchar();
                    }while (player.goals <= 0);

                    players[index] = player;
                    ID++;
                    index++;

                    system("clear");
                    print_header(" Player Added Successfully ");
                    break_down(player);

                    printf("Hit Enter to continue !");
                    getchar();
                    system("clear");

                    do{
                        print_header(" Adding Form ");
                        printf("| Do you want to continue adding ?\n");
                        printf("| 1. Yes :)\n");
                        printf("| 2. No :(\n");
                        printf("|\n");
                        printf("|--->");
                        scanf("%d", &inserting_choice);
                    }while(inserting_choice < 1 || inserting_choice > 2);

                    if(inserting_choice == 2){
                        is_inserting = false;
                    }
                }
            
                break;
            case 2 : 
                show_all(players, index);
                printf("| Hit Enter to continue ;)");
                getchar();
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