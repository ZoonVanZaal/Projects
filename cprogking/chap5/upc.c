// This program takes a UPC code and determines using it's check digit whether the code is valid

#include <stdio.h>

int main (void)
{
	int dig1, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, checkdig, sum1, sum2, calculated_checkdig;

	printf("Enter the UPC code, including check digit: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &dig1, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &checkdig);

	// Calculate check digit
	sum1 = dig1 + i2 + i4 + j1 + j3 + j5;
	sum2 = i1 + i3 + i5 + j2 + j4;

	calculated_checkdig = 9 - ((sum1 * 3 + sum2 - 1) % 10);

	printf("Check digit: %d\n", checkdig);
	printf("Calculated check digit: %d\n", calculated_checkdig);

	if ( checkdig == calculated_checkdig )
		printf("VALID CODE\n");
	else
		printf("INVALID CODE\n");

	return 0;
}
