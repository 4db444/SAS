#include <stdio.h>

int factoriel (int n){
	if (n == 1) return 1;
	return n * factoriel (n - 1);
}

int main (){
	int n = 0;
	
	printf("enter a number: ");
	scanf("%d", &n);
	
	printf("the factoriel of %d is: %d", n, factoriel(n));
	
	
	return 0;
}
