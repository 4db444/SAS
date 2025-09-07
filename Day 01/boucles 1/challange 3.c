#include <stdio.h>

int main (){
	int sum = 0;
	int n = 0;
	int i;
	
	printf("enter a number: ");
	scanf("%d", &n);
	
	for(i = 1; i<=n; i++){
		sum += i;
	}
	
	printf("the sum of number from 1 to %d is: %d", n, sum);
	
	return 0;
}
