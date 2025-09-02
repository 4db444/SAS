#include <stdio.h>

int main (){
    int n = 0;
    int sum = 0;

    printf("enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        sum += i;
    }

    printf("the sum numbers from 1 to 10 is: %d\n", sum);
    
    return 0;
}