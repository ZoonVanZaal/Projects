/* Reddit Daily Programmer Challenge #122 [Easy] - Sum Them Digits */

#include <stdio.h>
#include <stdlib.h>

// Computes the digital root (sums the digits of a number, and then the digits of the sum, etc, until the sum is a single digit number)
long digital_root(long num)
{
	long sum = 0; // initialize sum
	
	// sum the digits
	while (num != 0)
	{
		sum += num % 10;	// compute the last digit of num
		num = num / 10;		// "take away" the last digit of num using integer division, eg 276 / 10 = 27
	}
	
	// recursively sum the digits of the sum unless sum < 10
	if(sum >= 10) sum = digital_root(sum);
	
	return sum;
}
	

int main(long argc, char *argv[])
{
	if (argc != 2) {
		printf("digroot takes a single argument: the number whose digits you want summed\n");
		return 0;
	}	
	
	// atoi() converts a string to an integer, returns 0 for non-integer input
	long num_to_sum = atoll(argv[1]);
	
	long sum = digital_root(num_to_sum); 

	printf("The digital root of %lld: %lld\n", num_to_sum, digital_root(num_to_sum));
	
	return 0;
}
