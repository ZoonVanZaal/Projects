// This program asks for a wind speed in knots and displays the corresponding description on the Beaufort scale

#include <stdio.h>

int main(void)
{
	int windspeed;

	printf("Enter wind speed in knots: ");
	scanf("%d", &windspeed);

	if ( windspeed < 1 )
		printf("Beaufort description: Calm\n");
	else if ( windspeed <= 3 )
		printf("Beaufort description: Light air\n");
	else if ( windspeed <= 27 )
		printf("Beaufort description: Breeze\n");
	else if ( windspeed <= 47 )
		printf("Beaufort description: Gale\n");
	else if ( windspeed <= 63 )
		printf("Beaufort description: Storm\n");
	else
		printf("Beaufort description: Hurricane\n");

	return 0;
}
