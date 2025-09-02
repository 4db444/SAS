#include <stdio.h>

int main (){
    int n = 0;
    int num_degits = 0;

    printf("enter a number: ");
    scanf("%d", &n);

    while (n != 0){
        n /= 10;
        num_degits++;
    }

    printf("number of degits is: %d\n", num_degits);

    return 0;
}