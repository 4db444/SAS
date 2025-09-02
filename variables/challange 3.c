#include <stdio.h>

int main (){
	float kilometers = 0.0f;
	float yards = 0.0f;
	
	printf("enter the distance in kilometers: ");
	scanf("%f", &kilometers);
	
	yards = kilometers * 1093.61;
	
	printf("%.2f kilometes is: %.2f yards", kilometers, yards);
	
	return 0;
}
