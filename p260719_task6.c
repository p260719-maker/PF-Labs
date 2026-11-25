#include <stdio.h>

int main()
{
	printf("Name: Junaid Zafar\tRoll no: 26P-0719\tSection:BSAI-1A\n\n");

	printf("\tCircle Geometry Properties Calculator\n\n");

	float radius = 5.5, pi = 3.1415, Diameter, Circumference, Area ;
	
	Diameter = 2 * radius;
	Circumference = 2 * pi * radius;
	Area = pi * radius * radius;

	printf("Given Radius: %.3f \n", radius);
	printf("Value of pi: %.3f \n", pi);

	printf("\n\t\"Calculation Results\"\n\n");
	
	printf("Diameter = %.3f \n", Diameter);
	printf("Circumference = %.3f \n", Circumference);
	printf("Area = %.3f \n", Area);


	return 0;	
}