#include <stdio.h>

int main (){
	float a = 0.0f;
	float b = 0.0f;
	
	printf("enter the number a: ");
	scanf("%f", &a);
	
	printf("enter the number b: ");
	scanf("%f", &b);
	
	printf("a + b: %.2f\n", a + b);
	printf("a - b: %.2f\n", a - b);
	printf("a * b: %.2f\n", a * b);
	if(b == 0){
		printf("a / 0: can not devide by 0!");
	}else {
		printf("a / b: %.2f", a / b);
	}
	
	
	
	return 0;
}
