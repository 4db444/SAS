#include <stdio.h>

int main (){
	int n = 0;
	int num = 0;
	int new_num = 0;
	int i, j;
	
	printf("Enter the length of the array: ");
	scanf("%d", &n);
	
	int numbers[n];
	
	for(i = 0; i < n; i++){
		printf("Enter numbers[%d] = ", i);
		scanf("%d", &numbers[i]);
	}
	
	printf("What element to replace : ");
	scanf("%d", &num);
	
	printf("Searching...");
	for (i = 0; i < n; i++){
		if(numbers[i] == num){
			printf("The number founded :)\n");
			printf("the number is '%d' in the array (index: %d)\n", i+1, i);
			printf("Enter the new element: ");
			scanf("%d", &new_num);
			numbers[i] = new_num;
			printf("Element updated successfully!, here is the new array: \n[");
			
			for(j = 0; j < n; j++){
				if(j == n - 1 ) {
					printf("%d]", numbers[j]);
				}else{
					printf("%d, ", numbers[j]);
				}
			}
			return 0;
		}
	}
	printf("Sorry! the number '%d' does not exist in this array :(", num);
	
	return 0;
}
