#include <stdio.h>
#include <string.h>

int main (){
	char string[30] = "";
	
	printf("Enter a string: ");
	scanf("%s", &string);
	
	printf("the conversion to uppercase is: %s", strlwr(string));
	
	return 0;
}
