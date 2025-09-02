#include <stdio.h> 

int main (){
	int num = 0;
	
	printf("enter a number: ");
	scanf("%d", &num);
	
	int i;
	for (i = 1; i <= 10; i++){
		printf("%d * %01d = %01d\n", num, i, num * i);
	}
	return 0;
}
