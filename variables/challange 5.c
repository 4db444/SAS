#include <stdio.h>

int main (){

	float temp = 0.0f;
	
	printf("enter the tempreture in celcius: ");
	scanf("%f", &temp);
	
	if(temp >= 100){
		printf("the state of the liquid is: Gaz");
	}else if (temp >= 0){
		printf("the state of the liquid is: Liquid");
	}else {
		printf("the state of the liquid is: Solid");
	}
	
	return 0;
}
