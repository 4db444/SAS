#include <stdio.h>

int main (){
    int f0 = 0;
    int f1 = 1;
    int res = 0;
    int n = 0;

    printf("enter a number n: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++){
        res = f0 + f1;
        f0 = f1;
        f1 = res;
    }

    printf("f(%d) = %d\n", n, res);

    return 0;
}