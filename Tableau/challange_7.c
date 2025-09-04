#include <stdio.h>

int main (){
	int temp = 0;
	int i, j;
	int n = 0;
	
	printf("Enter the array length: ");
	scanf("%d", &n);
	
	int numbers[n];
	
	for (i = 0; i < n; i++){
		printf("Enter numbers[%d] = ", i);
		scanf("%d", &numbers[i]);
	}
	
	for(i = 0; i < n; i++){
		int min_id = i;
		for(j = i + 1; j < n; j++){
			if (numbers[min_id] > numbers[j]){
				min_id = j;
			}
		}
		temp = numbers[min_id];
		numbers [min_id] = numbers[i];
		numbers[i] = temp;
	}
	
	printf("Here is sorted version: \n");
	for(i = 0; i < n; i++){
		printf("numbers[%d] = %d\n", i, numbers[i]);
	}
	return 0;
}
