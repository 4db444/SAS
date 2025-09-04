#include <stdio.h>
#include <string.h>

int main (){
	char string[30] = "";
	char result[30] = "";
	int i, j = 0;
	
	printf("Enter a string to remove spaces from it: ");
	fgets(string, 30, stdin);
	
	for(i = 0; i < 30; i++){
		if(string[i] == ' '){
			continue;
		}
		result[j] = string[i];
		j++;
	}
	
	printf("the result is: %s", result);
	
	return 0;
}
