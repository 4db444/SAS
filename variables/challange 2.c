#include <stdio.h>

int main (){
	float temp_C = 0.0f;
	float temp_K = 0.0f;
	
	printf("enter the tempereture in Celsius: ");
	scanf("%f", &temp_C);
	
	temp_K = temp_C + 273.15;
	
	printf("%.2f celsius in kelvin is: %.2f", temp_C, temp_K);
	
}
