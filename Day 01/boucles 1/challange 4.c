#include <stdio.h>

int main (){
	int n = 0;

	printf("enter a number: ");
	scanf("%d", &n);
	
	int i;
	for(i = 1; i < n * 2; i += 2){
		printf("%d ", i);
	}
	
	return 0;
}
