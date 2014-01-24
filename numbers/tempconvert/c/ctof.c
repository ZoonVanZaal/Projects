// TODO: Modify to take command line arguments
// Program prompts for Celsius temperature and prints out Fahrenheit equivalent

#include <stdio.h>

#define FREEZING 32.0f
#define C_TO_F_SCALE (9.0f / 5.0f)

int main(void)
{
	float celsius, fahrenheit;

	printf("Enter temperature in Celsius: ");
	scanf("%f", &celsius);

	fahrenheit = (celsius * C_TO_F_SCALE) + FREEZING;

	printf("%.1f degrees Celsius is %.1f degrees Fahrenheit.\n", celsius, fahrenheit);

	return 0;
}
