// K.N. King Chapter 12 - Pointers and Multidimensional Arrays - Exercise Functions

#include <stdbool.h>
#include <stdio.h>

int sum_array_a(const int a[], int n);
int sum_array_b(const int * a, int n);
bool search(const int a[], int n, int key);

int main(void)
{
	int some_numbers[6] = {1, 2, 3, 1, 5, 5};
	
	/*
	printf("Array sum a: %d\n", sum_array_a(some_numbers, 6));
	printf("Array sum b: %d\n", sum_array_b(some_numbers, 6));
	*/
	
	printf("Has 3? %d\n", search(some_numbers, 6, 3));
	printf("Has 15? %d\n", search(some_numbers, 6, 15));
	
	return 0;
}

bool search(const int a[], int n, int key)
{
	for (int * p = a; p < a + n; p++)
		if (*p == key)
			return true;
	
	return false;
}
	
int sum_array_a(const int a[], int n)
{
	int i, sum = 0;
	for (i = 0; i < n; i++)
		sum += a[i];
	return sum;
}

int sum_array_b(const int * a, int n)
{
	int sum = 0;
	
	for (int *p = a; p < a + n; p++)
		sum += *p;
		
	return sum;
}












	