/* Prints a table of squares using a for statement */

#include <stdio.h>

int main(void)
{
	int i, n;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	getchar(); // Suck up the Return key press

	for (i = 1; i <= n; i++) {
		printf("%10d%10d\n", i, i*i);

		// Pause after 24 printings and wait for a return key press
		if (i % 24 == 0)
			while (getchar() != '\n')
				printf("Press Enter to continue");
	}

	return 0;
}
