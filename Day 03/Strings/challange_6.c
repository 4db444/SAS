#include <stdio.h>
#include <string.h>

int main (){
	char string[30] = "";
	char character = '\0';
	int count = 0;
	int i;
	
	printf("Enter a string: ");
	scanf("%s", &string);
	
	getchar();
	
	printf("Enter a character: ");
	scanf("%c", &character);
	
	for(i = 0; i < strlen(string); i++){
		if(string[i] == character){
			count++;
		}
	}
	
	printf("the number of occurance of '%c' in '%s' is: %d", character, string, count);
	
	return 0;
}
