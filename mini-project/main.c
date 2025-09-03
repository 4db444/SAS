#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main (){
    char titles[100][30] = {0};
    char writers[100][30] = {0};
    float prices[100] = {0};
    int quantities[100] = {0};

    int index = 0;
    int choice = 0;
    bool running = true;
    char book_name[30] = "";
    int quantity = 0;
    int total = 0;

    while (running) {
        printf("\n+----------------------------------------Menu---------------------------------------+\n");
        printf("|1. Add a book to stock.                                                            |\n");
        printf("|2. Show the available books.                                                       |\n");
        printf("|3. Search for a book by its title.                                                 |\n");
        printf("|4. Update the quantity of a book by its title.                                     |\n");
        printf("|5. Remove a book from stock.                                                       |\n");
        printf("|6. Show the total number of books in stock.                                        |\n");
        printf("|7. Exit :(                                                                         |\n");
        printf("+-----------------------------------------------------------------------------------+\n");

        do{
            printf("Choose an option by the associated number: ");
            scanf("%d", &choice);
        }while(choice < 1 || choice > 7);

        switch(choice){
            case 1: 
                printf("+------------------------------------Adding form------------------------------------+\n");
                printf("|Enter the book name:                                                               |\n");
                scanf("%s", titles[index]);
                
                printf("|Enter the book writer:                                                             |\n");
                scanf("%s", writers[index]);

                do{
                    printf("|Enter the book price:                                                              |\n");
                    scanf("%f", &prices[index]);
                }while(prices[index] < 0);

                do{
                    printf("|Enter the book quantity:                                                           |\n");
                    scanf("%d", &quantities[index]);
                }while(quantities[index] < 0);

                printf("+------------------------------------Successfull------------------------------------+\n");
                printf("|You have successfully entered your book, here is a break dow: \n");
                printf("|-> Titile: %s\n", titles[index]);
                printf("|-> Writer: %s\n", writers[index]);
                printf("|-> Price: %f\n", prices[index]);
                printf("|-> Quantity: %d\n", quantities[index]);   
                printf("+-----------------------------------------------------------------------------------+\n");
                printf("Hit return to continue :)");
                getchar();
                getchar();

                index++;
                break;
            case 2: 
                printf("|                                   All Books Page                                  |\n");
                printf("+--------------------+--------------------+--------------------+--------------------+\n");
                printf("|       Title        |       Writer       |       Price        |      Quantity      |\n");
                printf("+--------------------+--------------------+--------------------+--------------------+\n");
                for(int i = 0; i < index; i++){
                    printf("|%s", titles[i]);for(int j = 1; j < 21 - strlen(titles[i]); j++) printf(" ");
                    
                    printf("|%s", writers[i]);for(int j = 1; j < 21 - strlen(writers[i]); j++) printf(" ");
                    
                    printf("|%05.2f", prices[i]);for(int j = 1; j < 16; j++) printf(" ");
                    
                    printf("|%05d", quantities[i]);for(int j = 1; j < 16; j++) printf(" ");
                    printf("|\n");
                    if (i == index - 1){
                        printf("+-----------------------------------------------------------------------------------+\n");
                    }else {
                        printf("+--------------------+--------------------+--------------------+--------------------+\n");
                    }
                }

                printf("Hit return to continue ;)");
                getchar();               
                getchar();               
                break;
                
            case 3:
                printf("\n+---------------------------------------Search--------------------------------------+\n");
                printf("|Enter the name of the book:                                                            |\n");
                scanf("%s", &book_name);
                printf("|Searching...                                                                       |\n");
                for (int i = 0; i < index; i++){
                    if(strcmp(titles[i], book_name) == 0){
                        printf("|Founded :)                                                                         |");
                        printf("\n+-----------+-----------------------------------------------------------------------+\n");
                        printf("|Title      |%s", titles[i]);for(int j = 1; j < 72 - strlen(titles[i]); j++) printf(" ");
                        printf("|");
                        printf("\n+-----------+-----------------------------------------------------------------------|");
                        printf("\n|Writer     |%s", writers[i]);for(int j = 1; j < 72 - strlen(writers[i]); j++) printf(" ");
                        printf("|");
                        printf("\n+-----------+-----------------------------------------------------------------------|");
                        printf("\n|Price      |%05.2f", prices[i]);for(int j = 1; j < 67; j++) printf(" ");
                        printf("|");
                        printf("\n+-----------+-----------------------------------------------------------------------|");
                        printf("\n|Quantity   |%05d", quantities[i]);for(int j = 1; j < 67; j++) printf(" ");
                        printf("|");
                        printf("\n+-----------------------------------------------------------------------------------+\n");
                        printf("Hit return to continue ;)");
                        getchar();
                        getchar();
                        break;
                    }
                }
                break;
            case 4: 
                printf("\n+---------------------------------------Update--------------------------------------+\n");
                printf("|Enter the name of the book:                                                        |\n");
                scanf("%s", &book_name);
                printf("|Searching...                                                                       |\n");
                for (int i = 0; i < index; i++){
                    if(strcmp(titles[i], book_name) == 0){
                        printf("|Founded                                                                            |\n");
                        printf("|Enter the new quantity:                                                            |\n");
                        do{
                            scanf("%d", &quantity);
                        }while(quantity < 0);

                        quantities[i] = quantity;

                        printf("+------------------------------------Successfull------------------------------------+\n");
                        printf("|You have successfully updated your book quantity, here is a break down: \n");
                        printf("|-> Titile: %s\n", titles[i]);
                        printf("|-> Writer: %s\n", writers[i]);
                        printf("|-> Price: %f\n", prices[i]);
                        printf("|-> Quantity: %d\n", quantities[i]);   
                        printf("+-----------------------------------------------------------------------------------+\n");
                        printf("Hit return to continue :)");
                        getchar();
                        getchar();

                        break;
                    }
                }
                break;
            case 5 : 
                printf("\n+---------------------------------------Delete--------------------------------------+\n");
                printf("|Enter the name of the book to remove:                                              |\n");
                scanf("%s", &book_name);
                printf("|Searching...                                                                       |\n");
                for (int i = 0; i < index; i++){
                    if(strcmp(titles[i], book_name) == 0){
                        printf("|Founded                                                                            |\n");

                        for (int j = i; j < index - 1; j++){
                            strcpy(titles[j], titles[j + 1]);
                            strcpy(writers[j], writers[j + 1]);
                            prices[j] = prices[j + 1];
                            quantities[j] = quantities[j + 1];
                        }

                        index--;

                        printf("+------------------------------------Successfull------------------------------------+\n");
                        printf("|Book deleted successfully                                                          |\n");
                        printf("+-----------------------------------------------------------------------------------+\n");
                        printf("Hit return to continue :)");
                        getchar();
                        getchar();

                        break;
                    }
                }
                break;
            case 6 : 
                total = 0;
                for (int i = 0; i < index; i++){
                    total += quantities[i];
                }

                printf("\n+---------------------------------------Total---------------------------------------+");
                printf("\n|Total books in stock is: %d books.", total);
                printf("\n+-----------------------------------------------------------------------------------+\n");
                printf("Hit enter to continue ;)");
                getchar();
                getchar();
                break;
            case 7: 
                running = false;
                break;
        }
    }

    printf("Bye !!!\n");
    return 0;
}