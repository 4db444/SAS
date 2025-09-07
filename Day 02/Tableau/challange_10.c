#include <stdio.h>

int main (){
	int n = 0;
	int num = 0;
	int i;
	
	printf("Enter the length of the array: ");
	scanf("%d", &n);
	
	int numbers[n];
	
	for(i = 0; i < n; i++){
		printf("Enter numbers[%d] = ", i);
		scanf("%d", &numbers[i]);
	}
	
	printf("What element to look for : ");
	scanf("%d", &num);
	
	printf("Searching...");
	for (i = 0; i < n; i++){
		if(numbers[i] == num){
			printf("The number founded :)\n");
			printf("the number is '%d' in the array (index: %d)\n", i+1, i);
			return 0;
		}
	}
	printf("Sorry! the number '%d' does not exist in this array :(", num);
	
	return 0;
}
