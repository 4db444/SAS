#include <stdio.h>
#define length 10


int main (){
	int numbers[length] = {3, 4, 7, 8, 1, 5, 0, 2, 6, 9};
	int copy[length] = {0};
	int i;
	
	for (i = 0; i < length; i++){
		copy[i] = numbers[i];
	}
	
	printf("Here is the original array: \n[");
	for(i = 0; i < length; i++){
		if(i == length - 1 ) {
			printf("%d]", numbers[i]);
		}else{
			printf("%d, ", numbers[i]);
		}
	}
	
	printf("\nHere is the copy array: \n[");
	for(i = 0; i < length; i++){
		if(i == length - 1 ) {
			printf("%d]", copy[i]);
		}else{
			printf("%d, ", copy[i]);
		}
	}
	
	return 0;
}
