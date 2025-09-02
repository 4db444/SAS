#include <stdio.h>

int main (){
	int f = 1;
	int n = 0;
	
	printf("enter a number: ");
	scanf("%d", &n);
	
	int i;
	for (i = n; i > 1; i--){
		f *= i;
	}
	
	printf("the factorial of %d is: %d", n, f);
	return 0;
}
