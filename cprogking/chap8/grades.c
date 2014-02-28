/* grades.c prompts for a number of quiz grades for each of a number of students, then computes the total score and average score for each student, and the average score, high score, and low score for each quiz. Grades must be between 0 and 100.*/

#include <stdio.h>

#define QUIZZES 3
#define STUDENTS 3

int main(void)
{
	int grade[STUDENTS][QUIZZES], student_total[STUDENTS] = {0}; 
	int low_score[QUIZZES] = {100, 100, 100}, high_score[QUIZZES] = {0}, quiz_total[QUIZZES] = {0};
	int i, j, avg;

	// Get grades
	for (i = 0; i < STUDENTS; i++)
	{
		printf("Enter %d grades for Student %d: ", QUIZZES, i+1);
		for (j = 0; j < QUIZZES; j++)
		{
	  		scanf("%d", &grade[i][j]);		// Get next grade

			student_total[i] += grade[i][j];		// Add grade to current student total
			quiz_total[j] += grade[i][j];			// Add grade to current quiz total

			// Update low_grade and high_grade
			if (grade[i][j] < low_score[j]) low_score[j] = grade[i][j];
			else if (grade[i][j] > high_score[j]) high_score[j] = grade[i][j];
		}

		// student_average[i] = (int) ((student_total[i] / (float) QUIZZES) + 0.5f);
		
	}

	printf("\nFor each student: \n\tGrade total/average grade:");
	for (i = 0; i < STUDENTS; i++)
	{
		avg = (int) ((student_total[i] / (float) QUIZZES) + 0.5f);
		printf(" %d/%d,  ", student_total[i], avg);
	}

	printf("\nFor each quiz:\n\tLow score/high score/average score:");
	for (i = 0; i < QUIZZES; i++)
	{
		avg = (int) ((quiz_total[i] / (float) STUDENTS) + 0.5f);
		printf(" %d/%d/%d,  ", low_score[i], high_score[i], avg);
	}
	
	return 0;
}