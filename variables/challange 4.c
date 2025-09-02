#include <stdio.h>

int main (){
	float kph = 0.0f;
	float mps= 0.0f;
	
	printf("enter the speed in kph: ");
	scanf("%f", &kph);
	
	mps = kph * 0.27778;
	
	printf("%.2f k/h is: %.2f m/s", kph, mps);
}
