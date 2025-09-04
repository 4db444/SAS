#include <stdio.h>
#include <string.h>

int main (){
	char string[30] = "";
	int i;
	
	printf("Enter a string to get revesed: ");
	scanf("%s", &string);
	
	printf("the reversed \"%s\"is: ", string);
	for(i = strlen(string) - 1; i >= 0; i--){
		printf("%c", string[i]);
	}
	
	return 0;
}
