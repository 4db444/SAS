#include <stdio.h>

int main (){
    char string [30] = "";
    int count = 0;

    printf("Enter a string: ");
    scanf("%s", string);

    for(int i = 0; i < sizeof(string); i++){
        if(string[i] == '\0'){
            break;
        }
        count++;
    }

    printf("the length of \"%s\" is: %d\n", string, count);

    return 0;
}