#include <stdio.h>
#include <string.h>

int main (){
	char string1[30] = "";
	char string2[30] = "";
	char result[60] = "";
	
	printf("Enter the string1: ");
	scanf("%s", &string1);
	
	printf("Enter the string2: ");
	scanf("%s", &string2);
	
	strcpy(result, string1);
	strcat(result, string2);
	
	printf("the concatenated string is: %s", result);
	
	return 0;
}
