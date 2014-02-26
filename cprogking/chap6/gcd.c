// This program takes two integers and outputs the greatest common divisor of those integers.
// Euclid's algorithm: Let m, n be variables initially containing the two numbers. If n is 0, stop: m contains the GCD. Otherwise, compute the remainder when m is divided by n. Copy n into m and copy the remainder into n. Then repeat, starting with testing whether n is 0.

#include <stdio.h>

int main(void)
{
	int m, n, remainder;

	printf("Enter two integers: ");
	scanf("%d %d", &m, &n);
	
	// This is entirely unnecessary: the algorithm takes care of that already, dumbass
	// Make sure m >= n, and if not, swap them
	/*int dummy;
	if( m < n )	{
		dummy = m;
		m = n;
		n = dummy;
	}*/

	// Find the GCD of m and n
	while ( n != 0 ) {
		remainder = m % n;
		m = n;
		n = remainder;
	}

	printf("GCD: %d\n", m);

	return 0;
}
