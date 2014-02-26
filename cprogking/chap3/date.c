// This program takes a user inputed date of the form mm/d/yyyy and converts it to yyyymmdd format

#include <stdio.h>

int main(void)
{
	int day, month, year;

	printf("Enter the date in the form mm/dd/yyyy:\t");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("The date in yyyymmdd format:\t%d%d%d\n", year, month, day);

	return 0;
}
