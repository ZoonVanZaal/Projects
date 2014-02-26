/* Prints the size of various data types */

#include <stdio.h>

int main(void)
{
	printf("sizeof(int) = %d\n", (int) sizeof(int));
	printf("sizeof(short) = %d\n", (int) sizeof(short));
	printf("sizeof(long) = %d\n", (int) sizeof(long));
	printf("sizeof(float) = %d\n", (int) sizeof(float));
	printf("sizeof(double) = %d\n", (int) sizeof(double));
	printf("sizeof(long double) = %d\n", (int) sizeof(long double));
	printf("sizeof(char) = %d\n",(int) sizeof(char));
	printf("sizeof('a') = %d\n",(int) sizeof('a'));
	
	

	return 0;
}
