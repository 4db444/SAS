#include <stdio.h>

struct Student {
    char first_name[20];
    char last_name[20];
    int grades[10];
};

int main (){
    struct Student me = {
        "fred",
        "ben ali",
        {2, 10, 12, 11, 2, 5, 1, 0, 20, 15}
    };

    printf("your first name is: %s\n", me.first_name);
    printf("your last name is: %s\n", me.last_name);
    printf("your grades are: [");

    for (int i = 0; i < sizeof(me.grades) / sizeof(me.grades[0]); i++){
        printf("%d ", me.grades[i]);
    }
    printf("]");


    return 0;
}