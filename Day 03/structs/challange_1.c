#include <stdio.h>

struct Person {
    char first_name[20];
    char last_name[20];
    int age;
};

int main (){
    struct Person me = {"brahim", "alhiane", 22};

    printf("your first name is: %s\n", me.first_name);
    printf("your last name is: %s\n", me.last_name);
    printf("your age is: %d\n", me.age);

    return 0;
}