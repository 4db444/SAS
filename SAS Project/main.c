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
        while (string[j] != '\0') string[j++] = string[i++];
        string [j] = '\0';
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

void print_table_head (){
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
}

void show_all (Player players [], int index){
    print_table_head();

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

void sort_by_position (Player arr[], int index){
    int j = 0;
    Player temp = {};
    
    for(int i = 0; i < index; i++){
        if(strcmp(arr[i].position, "Striker") == 0){
            temp = arr[j];
            arr[j++] = arr[i];
            arr[i] = temp;
        }
    }

    for(int i = j; i < index; i++){
        if(strcmp(arr[i].position, "Midfeilder") == 0){
            temp = arr[j];
            arr[j++] = arr[i];
            arr[i] = temp;
        }
    }

    for(int i = j; i < index; i++){
        if(strcmp(arr[i].position, "Defender") == 0){
            temp = arr[j];
            arr[j++] = arr[i];
            arr[i] = temp;
        }
    }
}

void sort_by_age (Player arr[], int index){

    Player temp = {0};

    for(int i = 0; i < index - 1; i++){
        int max = i;
        for (int j = i + 1; j < index; j++){
            if(arr[max].age < arr[j].age){
                max = j;
            }
        }

        temp = arr[max];
        arr[max] = arr[i];
        arr[i] = temp;

    }
}

void sort_by_name (Player arr[], int index){
    for (int i = 0; i < index - 1; i++){
        int min = i;
        Player temp = {};
        
        for (int j = i + 1; j < index; j++){
            char full_name_i [60] = "", full_name_j [60] = "";
            strcpy(full_name_i, arr[min].first_name);
            strcat(full_name_i, " ");
            strcat(full_name_i, arr[min].last_name);

            strcpy(full_name_j, arr[j].first_name);
            strcat(full_name_j, " ");
            strcat(full_name_j, arr[j].last_name);

            if(strcmp(full_name_i, full_name_j) > 0){
                min = j;
            }
        }

        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

void sort_by_goals (Player arr[], int index){

    Player temp = {0};

    for(int i = 0; i < index - 1; i++){
        int max = i;
        for (int j = i + 1; j < index; j++){
            if(arr[max].goals < arr[j].goals){
                max = j;
            }
        }

        temp = arr[max];
        arr[max] = arr[i];
        arr[i] = temp;

    }
}

int find_by_id (Player arr[], int index, int id){
    for (int i = 0; i < index; i++){
        if(arr[i].id == id) return i;
    }

    return -1;
}

int find_by_name (Player arr[], int index, char name[]){
    for (int i = 0; i < index; i++){
        char full_name_1[60] = "", full_name_2[60];
        strcpy(full_name_1, arr[i].first_name);
        strcat(full_name_1, " ");
        strcat(full_name_1, arr[i].last_name);

        strcpy(full_name_2, arr[i].last_name);
        strcat(full_name_2, " ");
        strcat(full_name_2, arr[i].first_name);

        if(strcmp(full_name_1, name) == 0 || strcmp(full_name_2, name) == 0) return i;
    }

    return -1;
}

void update_player (Player arr[], int index, int id){
    int new_age = 0;
    int new_goals = 0;
    int new_post = 0;

    do{
        printf("| Enter the new age: ");
        scanf("%d", &new_age);
        while (getchar() != '\n');
    }while (new_age <= 10 || new_age >=100);

    arr[id].age = new_age;

    do{
        printf("| Enter the player's position: \n");
        printf("|\t1. Goalkeeper \n");
        printf("|\t2. Defender \n");
        printf("|\t3. Midfeilder \n");
        printf("|\t4. Striker \n");
        printf("|-----> ");
        scanf("%d", &new_post);

        while(getchar() != '\n');

        switch (new_post){
            case 1 :
                strcpy(arr[id].position, "Goalkeeper");
                break;
            case 2 :
                strcpy(arr[id].position, "Defender");
                break;
            case 3 :
                strcpy(arr[id].position, "Midfeilder");
                break;
            case 4 :
                strcpy(arr[id].position, "Striker");
                break;
            default : 
                printf("|-----> You must choose a number between 1 and 4.\n");
        }
    }while (new_post < 1 || new_post > 4); 


    do{
        printf("| Enter the new scored goals: ");
        scanf("%d", &new_goals);
        while (getchar() != '\n');
    }while (new_goals < 0);

    arr[id].goals = new_goals;
}

int search_type (Player arr[], int index){
    int search_type = 0;

    do{
        printf("| Choose how you can find your player : \n");
        printf("|\n");
        printf("|\t1. Find by id.\n");
        printf("|\t2. Find by name.\n");
        printf("|\n");
        printf("|---> ");
        scanf("%d", &search_type);
        while (getchar() != '\n');
    }while (search_type < 1 || search_type > 2);
    
    system("clear");
    switch(search_type){
        case 1 : 
            int id = 0;

            print_header(" Delete ");
            do{
                printf("| Enter the player ID: ");
                scanf("%d", &id);
                while (getchar() != '\n');
            }while (id <= 0);

            printf("| Searching...\n");
            return find_by_id(arr, index, id);

        case 2 : 
            char name[60] = "";
            
            print_header(" Delete ");
            do{
                printf("| Enter the player full-name: ");
                fgets(name, 60, stdin);
                name[strlen(name) - 1] = '\0';
            }while (strlen(name) < 5);
            
            trim(name);
            printf("| Searching...\n");
            return find_by_name(arr, index, name);
        default: 
            printf("| Please enter a valid value ! (1/2).\n");
    }
}

void delete_player (Player arr[], int *index){
    int id = search_type(arr, *index);

    if(id >= 0){
        char response = '\0';

        break_down(arr[id]);
        printf("| Are you sure you want to delete this record ? (y/n) ");
        scanf("%c", &response);
        
        system("clear");
        print_header(" Delete ");
        if(response == 'y' || response == 'Y') {
            for (int i = id; i < *index; i++){
                arr[i] = arr[i + 1];
            }
            (*index)--;
            printf("| Record deleted successfully !\n");
        }else{
            printf("| Deletion process is canceled! be carfull next time !\n");
        }
    }else{
        printf("| There is no matching record !\n");
    }

    printf("\n| Hit Enter to continue !");
    getchar();
    getchar();
}
void search_player (Player arr[], int index){
    int id = search_type(arr, index);

    if(id >= 0){
        printf("| Founded. \n");
        break_down(arr[id]);
    }else{
        printf("| There is no matching record !\n");
    }

    printf("\n| Hit Enter to continue ;)");
    getchar();
    getchar();
}

float avg_age(Player arr[], int index){
    float sum = 0;
    for(int i = 0; i < index; i++){
        sum = sum + arr[i].age;
    }
    float avg = sum / index;
    return avg;
}

int top_scorer(Player arr[], int index){
    int max = 0;
    for(int i = 1; i < index; i++){
        if(arr[i].goals > arr[max].goals){
            max = i;
        }
    }
    return max;
}

int yongest_player(Player arr[], int index){
    int min = 0;
    for(int i = 1; i < index; i++){
        if(arr[i].age < arr[min].age){
            min = i;
        }
    }
    return min;
}

int main (){

    Player players[100] = {
        {1, "brahim", "hello", 2, "Defender", 11, 100},
        {2, "messi", "hi", 11, "Striker", 15, 120},
        {3, "halland", "by", 5, "Striker", 8, 20},
        {4, "khalid", "moooochi", 1, "Goalkeeper", 85, 45}
    };
    int ID = 5;
    int choice = 0;
    bool is_running = true;
    int index = 4;

    print_in_center("Welcome To Team Managing App", WIDTH);

    printf("\n\n");
    
    while (is_running){
        
        print_header(" Menu ");
        print_line(" 1. Add a player.");
        print_line(" 2. Show all players.");
        print_line(" 3. Update a player.");
        print_line(" 4. Delete a player.");
        print_line(" 5. Search for a player (name / ID).");
        print_line(" 6. Show statistics.");
        print_header("");

        printf("| choose your option by the associated number: ");
        scanf("%d", &choice); 
        while(getchar() != '\n');

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
                        while(getchar() != '\n');
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

                        while(getchar() != '\n');

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
                        while(getchar() != '\n');
                    }while (player.age <= 10 || player.age >= 100);

                    do{
                        printf("| Enter the player's Goals: ");
                        scanf("%d", &player.goals);
                        while(getchar() != '\n');
                    }while (player.goals < 0);

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
                        while(getchar() != '\n');
                    }while(inserting_choice < 1 || inserting_choice > 2);

                    if(inserting_choice == 2){
                        is_inserting = false;
                    }
                }
            
                break;
            case 2 : 
                int sort_choice = 0;
                bool is_showing = true;

                while(is_showing){

                    print_header(" Sort & Show");
                    do{
                        printf("| what do you want to sort the players by ?\n");
                        printf("|\t 1. Name (first name + last name).\n");
                        printf("|\t 2. Age.\n");
                        printf("|\t 3. Goals.\n");
                        printf("|\t 4. Position.\n");
                        printf("|\t 5. Back home menu.\n");
                        printf("|-----> ");
                        scanf("%d", &sort_choice);
                        while(getchar() != '\n');
                    }while(sort_choice < 1 || sort_choice > 5);
                    
                    system("clear");
                    switch(sort_choice){
                        case 1:
                            sort_by_name(players, index);
                            break;
                        case 2:
                            sort_by_age(players, index);
                            break;
                        case 3:
                            sort_by_goals(players, index);
                            break;
                        case 4:
                            sort_by_position(players, index);
                            break;
                        case 5:
                            is_showing = false;
                            break;
                    }
                    if(is_showing){
                        print_header(" Sort & Show");
                        show_all(players, index);
                        printf("| Hit Enter to continue ;)");
                        getchar();
                        system("clear");
                    }
                }
                break;
            case 3 : 
                int target_id = 0;
                int player_id = 0;
                bool is_updating = true;
                int continue_update_choice = 0;

                while (is_updating){
                    print_header(" Update ");
    
                    do{
                        printf("| Enter the player id to update: ");
                        scanf("%d", &target_id);
                        while (getchar() != '\n');
                    }while (target_id < 0);
    
                    printf("| Searching...\n");
    
                    player_id = find_by_id(players, index, target_id);
    
                    if(player_id < 0) {
                        printf("| The player you are looking for does not exists in the team !\n");
                        printf("| Hit Enter to continue ;)");
                        getchar();
                    }else{
                        printf("| Founded !\n");
                        break_down(players[player_id]);
                        printf("| Hit Enter to contniue ;)");
                        getchar();
                        
                        system("clear");
                        print_header(" Update ");
                        update_player(players, index, player_id);
        
                        system("clear");
                        print_header(" Updated Successfully ");
                        break_down(players[player_id]);
        
                        printf("| Hit Enter to contniue ;)");
                        getchar();
                    }

                    system("clear");

                    do{
                        print_header(" Update ");
                        printf("| Do you want to try again ?\n");
                        printf("| 1. Yes :)\n");
                        printf("| 2. No :(\n");
                        printf("|\n");
                        printf("|--->");
                        scanf("%d", &continue_update_choice);
                        while(getchar() != '\n');
                    }while(continue_update_choice < 1 || continue_update_choice > 2);

                    if(continue_update_choice == 2){
                        is_updating = false;
                    }
                    system("clear");
                }


                break;
            case 4 : 
                print_header(" Delete ");
                delete_player(players, &index);
                break;
            case 5 : 
                print_header(" Search ");
                search_player(players, index);
                break;
            case 6 : 
                bool is_stats = true;
                int stats_choice = 0;

                if(index > 0){

                    while (is_stats){
                        print_header(" Stats ");

                        printf("|\t1. Show total players.\n");
                        printf("|\t2. Show average team age.\n");
                        printf("|\t3. Show players scored more than ...\n");
                        printf("|\t4. Show team's top scorer.\n");
                        printf("|\t5. Show the yougest player.\n");
                        printf("|\t6. Back to home menu.\n");
                        printf("|\n");

                        do {
                            printf("|-----> ");
                            scanf("%d", &stats_choice);
                            while(getchar() != '\n');
                        }while(stats_choice > 6 || stats_choice < 1);

                        system("clear");
                        if(stats_choice == 1){
                            print_header(" Total Team Players ");
                            printf("|\n");
                            printf("|\n");
                            printf("|----------> Total team players is: %d\n", index);
                            printf("|\n");
                            printf("|\n");
                            printf("| Hit Enter to continue ;)");
                            getchar();
                        }
                        else if(stats_choice == 2){
                            print_header(" Average Age ");
                            printf("|\n");
                            printf("|\n");
                            printf("|----------> Avrage team age is: %.2f", avg_age(players, index));
                            printf("|\n");
                            printf("|\n");
                            printf("| Hit Enter to continue ;)");
                            getchar();
                        }
                        else if(stats_choice == 3){
                            int x_goals = 0;
                            Player new_palyers[index] = {};
                            int j = 0;
                            print_header(" More than X goals ");
                            do{
                                printf("| Enter the number of golas to show players that scores more than it: ");   
                                scanf("%d", &x_goals);
                                while (getchar () != '\n');
                            }while (x_goals < 0);

                            for(int i = 0; i < index; i++){
                                if(players[i].goals >= x_goals){
                                    new_palyers[j++] = players[i];
                                }
                            }

                            if(j == 0){
                                printf("| There is not player who scored more than %d goals !\n", x_goals);
                            }else{
                                show_all(new_palyers, j);
                            }
                            printf("| Hit Enter to continue ;)");
                            getchar();
                        }
                        else if(stats_choice == 4){
                            print_header(" Team top scorer ");
                            if(index > 0){
                                break_down(players[top_scorer(players, index)]);
                            }
                            printf("| Hit Enter to continue ;)");
                            getchar();
                        }
                        else if(stats_choice == 5){
                            print_header(" Yongest player ");
                            if(index > 0){
                                break_down(players[yongest_player(players, index)]);
                            }
                            printf("| Hit Enter to continue ;)");
                            getchar();
                        }
                        else if(stats_choice == 6){
                            is_stats = false;
                        }else{
                            printf("| Enter a valide choice !\n");
                            printf("| Hit Enter to continue ;)");
                            getchar();
                        }
                        
                        system ("clear");
                    }
                    break;
                }else{
                    print_header(" Empty set ");
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    print_in_center("There is no players yet, please go back and add some !", WIDTH);
                    printf("\n");
                    printf("\n");
                    printf("\n Hit Enter to continue ;)");
                    getchar();
                }
                break;
            case 7:
                is_running = false;
                break;
            default : 
            
                print_header(" 404 ");
                printf("\n\n");
                print_in_center("OOPS, looks like there is not matching option :(", WIDTH);
                printf("\n\n\nHit Enter to continue ;)\n");
                getchar();
        }
        choice = 0;
        system("clear");
    }
    return 0;
}