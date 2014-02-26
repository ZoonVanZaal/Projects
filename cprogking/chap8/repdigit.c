// repdigit asks for a number and outputs how many times each digit appears in the number

#include <stdio.h>

int main(void)
{
	int digit_count[10] = {0};
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);
	
	while (n > 0) {
		digit_count[n % 10]++;  // Increments the count for the current digit
		n /= 10;				// Queues next digit
	}

	printf("Digit:      0  1  2  3  4  5  6  7  8  9\n"); 
	printf("Occurences: ");

	for (int i = 0; i < 10; i++)
		printf("%-3d", digit_count[i]);

	printf("\n");
	
	return 0;
}
