// This program converts a numerical grade into a letter grade

#include <stdio.h>

int main(void)
{
	int grade;

	printf("Enter a grade: ");
	scanf("%d", &grade);

	if (grade < 0 || grade > 100) {
		printf("Grade must be between 0 and 100\n");
		return 0;
	}

	switch (grade / 10) {
		case 10: case 9: printf("Grade: A\n"); break;
		case 8: printf("Grade: B\n"); break;
		case 7: printf("Grade: C\n"); break;
		case 6: printf("Grade: D\n"); break;
		default: printf("Grade: F\n"); break;
	}

	return 0;
}
