#include <stdio.h>
#include <math.h>

int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	
	printf("your equation will be in this format: Ax*x + Bx + C = 0\n");
	
	printf("enter the number a: ");
	scanf("%d", &a);
	
	printf("enter the number b: ");
	scanf("%d", &b);
	
	printf("enter the number c: ");
	scanf("%d", &c);

	int delta = b*b - 4 * a * c;
	
	printf("\nYour equation is: %dx*x %+dx %+d = 0", a, b, c);
	
	if (delta > 0){
		float x1 = (-b - sqrt(delta)) / 2 * a;
		float x2 = (-b + sqrt(delta)) / 2 * a;
		
		printf("and the two solutions are: \n");
		printf("X1: %.2f\n", x1);
		printf("X2: %.2f\n", x2);
	} else if(delta == 0){
		float x0 = -b / (2 * a);
		
		printf("ant the single soludtion is: \n");
		printf("X0: %.2f", x0);
	}else {
		printf("\n\nThis equation has no real number solutino :(");
	}
}
