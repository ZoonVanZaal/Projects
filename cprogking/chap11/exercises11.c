// K.N. King Chapter 11: Pointers - Exercise Tests

#include <stdio.h>

void swap(int *p, int *q);
void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
	/*
	int a, b;
	
	printf("Enter a: "); scanf("%d", &a);
	printf("Enter b: "); scanf("%d", &b);
	
	printf("\na = %d, b = %d\n", a, b);
	
	printf("\nSwapping...\n");
	swap(&a, &b);
	
	printf("\na = %d, b = %d\n", a, b);
	*/
	int a[4] = {5, 5, 4, 1}; //{3, 3, 2, 1};
	int big, big2;
	find_two_largest(a, 4, &big, &big2);
	
	printf("Largest: %d\nSecond largest: %d\n", big, big2);
	return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{	
	if (a[0] < a[1]) {
		*largest = a[1];
		*second_largest = a[0];
	} else {
		*largest = a[0];
		*second_largest = a[1];
	}

	
	for(int i = 2; i < n; i++)
	{
		if (a[i] > *largest)
		{
			*second_largest = *largest;
			*largest = a[i];
		}
		else if (a[i] > *second_largest)
			*second_largest = a[i];
	}
}

void swap(int *p, int *q)
{
	int dummy = *p;
	*p = *q;
	*q = dummy;
}