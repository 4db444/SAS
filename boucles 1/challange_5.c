#include <stdio.h>

int main (){
    int base = 0;
    int exposant = 0;
    int result = 1;

    printf("entrer la base: ");
    scanf("%d", &base);

    printf("entrer l'exposant: ");
    scanf("%d", &exposant);

    for(int i = 1; i <= exposant; i++){
        result *= base;
    }

    printf("le resultat est: %d\n", result);

    return 0;
}