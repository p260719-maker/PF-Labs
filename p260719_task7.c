#include <stdio.h>

int main()
{
	printf("Name: Junaid Zafar\tRoll no: 26P-0719\tSection:BSAI-1A\n\n");

	printf("\tKINEMATICS MOTION REPORT\n\n");

	float vi = 2.3, a = 5.14, t = 7.2;
	float vf, d;
	
	vf = vi + (a * t);
	d = vi * t + (0.5 * a * t *t);
	
	printf("Given Data\n\n");

	printf("Initial Velocity = %.2f m/s \n", vi);
	printf("Acceletration = %.2f m/s^2\n", a);
	printf("Time = %.2f s\n", t);
	
	printf("\nCalculation Results\n\n");
	printf("Final Velocity = %.2f m/s \n", vf);
	printf("Distance = %.2f m\n", d);

	return 0;	
}
