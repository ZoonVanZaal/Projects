// This program prompts the user for the time in 24 hour format and outputs the time in 12 hour format

#include <stdio.h>

int main(void)
{
	int hour_24, hour_12, minutes;
	int is_am = 0;
	
	printf("Enter the time in 24 hour format (hh:mm): ");
	scanf("%d:%d", &hour_24, &minutes);

	if ( hour_24 >= 13 ) { 
		hour_12 = hour_24 - 12;
	}
	else if ( hour_24 == 0 )	{
		hour_12 = 12;
		is_am = 1;
	}
	else {
		if ( hour_24 != 12 ) is_am = 1;

		hour_12 = hour_24;
	}
		
	
	printf("The time in 12 hour format is %d:%d ", hour_12, minutes);

	if ( is_am ) printf("am\n"); else printf("pm\n");

	return 0;
}
