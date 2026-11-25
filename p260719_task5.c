#include <stdio.h>

int main()
{
	printf("Name: Junaid Zafar\tRoll no: 26P-0719\tSection:BSAI-1A\n\n");

	printf("\tTemperature Scale Conversion Chart\n\n");
	printf("Let us consider Normal Human Body Temperature\n\n");

	float celsius, Fahrenheit, Kelvin;

	celsius = 37.2;
	Fahrenheit = ( celsius * 9.0/5.0) + 32.0;
	Kelvin = celsius + 273.15;

	printf("Temperature in Celsius: %.2f `C\n", celsius);
	printf("Temperature in Fahrenheit: %.2f `F\n", Fahrenheit);
	printf("Temperature in Kelvin: %.2f K\n", Kelvin);

	return 0;	
}