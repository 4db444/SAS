#include <stdio.h>
#include <string.h>

int main (){
	char string[30] = "";
	
	printf("Enter a string: ");
	fgets(string, 30, stdin);
	
	printf("the string you entered is: %s.", string);
	
	return 0;
}
