#include <stdio.h>
#include <string.h>

char reverse (char string[]){
	int length = strlen(string);
	char reversed[length];
	
	int i;
	for (i = 0; i < length; i++){
		reversed[i] = string[length - i - 1];
	}
	printf("the reversed vertions of \"%s\" is: %s", string, reversed);
}

int main(){
	char string[20] = "";
	
	printf("enter the string to reverse: ");
	scanf("%s", &string);
	
	printf("the reversed version of \"%s\" is: %s",string, reverse(string));
	return 0;
}
