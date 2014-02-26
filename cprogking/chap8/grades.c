/* grades.c prompts for a number of quiz grades for each of a number of students, then computes the total score and average score for each student, and the average score, high score, and low score for each quiz. Grades must be between 0 and 100.*/

#include <stdio.h>

#define QUIZZES 3
#define STUDENTS 3

int main(void)
{
	int grade[STUDENTS][QUIZZES], total[STUDENTS], student_average[STUDENTS];
	int low_score[QUIZZES], high_score[QUIZZES], quiz_average[QUIZZES];
	int i, j;

	// Get grades
	for (i = 0; i < STUDENTS; i++)
	{
		printf("Enter %d grades for Student %d: ", QUIZZES, i+1);
		for (j = 0; j < QUIZZES; j++)
		{
	  		scanf("%d", &grade[i][j]);		// Get next grade

			total[i] += grade[i][j];		// Add grade to student total

			// Update low_grade and high_grade
			if (grade[i][j] < low_score[j]) low_score[j] = grade[i][j];
			else if (grade[i][j] > high_score[j]) high_score[j] = grade[i][j];
		}

		student_average[i] = (int) ((total[i] / (float) QUIZZES) + 0.5f);
	}

	printf("\nFor each student: \n\tGrade total / average grade:");
	for (i = 0; i < STUDENTS; i++)
	{
		printf("\t%d / %d", total[i], student_average[i]);
	}

	printf("\nFor each quiz:\n\tLow score / high score / average score:");
