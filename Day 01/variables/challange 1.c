#include <stdio.h>

int main(){
	char first_name[20] = "";
	char last_name[20] = "";
	int age = 0;
	char sex[6] = "";
	char email[50] = "";
	
	
	printf("enter your first name: ");
	scanf("%s", &first_name);
	
	printf("enter your last name: ");
	scanf("%s", &last_name);
	
	printf("enter your age: ");
	scanf("%d", &age);
	
	printf("enter your sex: ");
	scanf("%s", &sex);
	
	printf("enter your email: ");
	scanf("%s", &email);
	
	
	printf("Hi! your name is %s %s, ", first_name, last_name);
	printf("and you are %d years old.\n", age);
	printf("your sex is: %s\n", sex);
	printf("your email is: %s\n", email);
	
	
  	return 0;
}

