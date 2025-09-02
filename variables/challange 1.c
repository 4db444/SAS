#include <stdio.h>

// challange 1
//int main(){
//	char first_name[20] = "";
//	char last_name[20] = "";
//	int age = 0;
//	char sex[6] = "";
//	char email[50] = "";
//	
//	
//	printf("enter your first name: ");
//	scanf("%s", &first_name);
//	
//	printf("enter your last name: ");
//	scanf("%s", &last_name);
//	
//	printf("enter your age: ");
//	scanf("%d", &age);
//	
//	printf("enter your sex: ");
//	scanf("%s", &sex);
//	
//	printf("enter your email: ");
//	scanf("%s", &email);
//	
//	
//	printf("Hi! your name is %s %s, ", first_name, last_name);
//	printf("and you are %d years old.\n", age);
//	printf("your sex is: %s\n", sex);
//	printf("your email is: %s\n", email);
//	
//	
//  	return 0;
//}


//challange 2
int main (){
	float temp_C = 0.0f;
	float temp_K = 0.0f;
	
	printf("enter the tempereture in Celsius: ");
	scanf("%f", &temp_C);
	
	temp_K = temp_C + 273.15;
	
	printf("%.2f celsius in kelvin is: %.2f", temp_C, temp_K);
	
}
