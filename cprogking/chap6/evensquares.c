// evensquares.c
// Prompts the user for a number and prints all even squares between 1 and that number

#include <stdio.h>

int main(void)
{
	int i, square, num;

	printf("Enter a positive integer: ");
	scanf("%d", &num);

	/*square = 4;
	for (i = 4; square <= num; i += 2) {
		printf("%d\n", square);
		square = i * i;
	}*/

	// Better:
	for (i = 2; i*i <= num; i += 2)
		printf("%d\n", i*i);

	return 0;
}
