#include <stdio.h>

int main (){
    int n = 0;

    printf("enter the number of even numbers you want to see: ");
    scanf("%d", &n);

    for(int i = 2; i <= n * 2; i += 2){
        printf("%d ", i);
    }

    return 0;
}