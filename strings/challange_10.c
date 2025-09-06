#include <stdio.h>
#include <string.h>

int main (){
    char string[30] = "";
    char sub_string[30] = "";

    printf("Enter a string: ");
    scanf("%s", string);
    
    printf("Enter a sub_string: ");
    scanf("%s", sub_string);

    if(strstr(string, sub_string) != NULL){
        printf("the substring '%s' exists in '%s'.", sub_string, string);
    }else {
        printf("the substring '%s' does not exists in '%s'.", sub_string, string);
    }

    return 0;
}