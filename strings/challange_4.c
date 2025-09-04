#include <stdio.h>
#include <string.h>

int main (){
	char string1[30] = "";
	char string2[30] = "";
	
	printf("Enter the string1: ");
	scanf("%s", &string1);
	
	printf("Enter the string2: ");
	scanf("%s", &string2);
	
	if(strcmp(string1, string2) == 0){
		printf("the strings are the same :)");
	}else {
		printf("the strings \"%s\" and \"%s\" are not the same :(", string1, string2);
	}
	
	return 0;
}
