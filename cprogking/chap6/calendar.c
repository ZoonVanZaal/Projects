// calendar.c
// Given a number of days in a month and a starting day of the week (1=Sun, 7=Sat), prints a calendar for that month

#include <stdio.h>

#define WEEKDAYS 7

int main(void)
{
	int days, start_day, curr_weekday;
	
	printf("Enter the month's number of days: ");
	scanf("%d", &days);

	printf("Enter the month's starting day (1=Sun, 7=Sat): ");
	scanf("%d", &start_day);

	// Print tabs for days in previous month
	for (curr_weekday = 1; curr_weekday < start_day; curr_weekday++) 
		printf("\t");

	// Print the month
	int i;
	for (i = 1; i <= days; i++, curr_weekday++) {
		// Print the current day
		printf("%2d\t", i);

		// Print a new line if the week is over
		if (curr_weekday == WEEKDAYS) { // King: if ((start_day + i - 1) % 7 == 0)
			printf("\n");
			curr_weekday = 0;
		}
	}

	// Print a new line at the end if one hasn't already been printed
	 if (curr_weekday != 1)
		printf("\n");

	return 0;
}
