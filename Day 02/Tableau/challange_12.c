#include <stdio.h>

int main (){
	int n = 0;
	int i;
	
	printf("Enter the length of the array: ");
	scanf("%d", &n);
	
	int numbers[n];
	
	for(i = 0; i < n; i++){
		printf("Enter numbers[%d] = ", i);
		scanf("%d", &numbers[i]);
	}
	
	printf("The even numbers of the array are :");
	for(i = 0; i < n; i++){
		if(numbers[i] % 2 == 0){
			printf("%d ", numbers[i]);
		}
	}
	return 0;
}
