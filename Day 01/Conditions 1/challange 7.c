#include <stdio.h>

int main (){
	char character;
	
	printf("enter a character: ");
	scanf("%c", &character);
	
	if(character >= 'A' && character <= 'Z'){
		printf("\"%c\" is an Uppercase letter !", character);
	}else{
		printf("\"%c\" is a lowercase letter !", character);
	}
	
	return 0;
}
