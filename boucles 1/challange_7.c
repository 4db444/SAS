#include <stdio.h>

int main (){
    int num= 0;
    int reversed = 0;

    printf("enter a number: ");
    scanf("%d", &num);

    while(num != 0){
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    printf("result is: %d", reversed);

    return 0;
}