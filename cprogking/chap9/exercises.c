/* Contains functions as assigned by the various Chapter 9 exercises */

#include <stdio.h>

/* Function prototypes */
int check(int x, int y, int n);
int day_of_year(int month, int day, int year);
int digit(int n, int k);
int largest(int a[], int n);
float average(int a[], int n);
int num_positive(int a[], int n);
double median(double x, double y, double z);
double median2(double x, double y, double z);
int fact(int n);
void pb(int n);

int main(void) {
    /*
    int x, y, n = 1;
	
    printf("Enter 3 integers: ");
    scanf("%d%d%d", &x, &y, &n);
	
    while (n != 0)
    {		
        if (check(x,y,n)) printf("%d and %d are each non-negative and less than %d\n", x, y, n);
        else printf("%d and %d do not both fall between 0 and %d\n", x, y, n);
		
        printf("Enter 3 integers: ");
        scanf("%d%d%d", &x, &y, &n);
    }	
     */

    /*
    int month, day, year;
	
    printf("Enter a month, day, and year: ");
    scanf("%d%d%d", &month, &day, &year);
    printf("Day of the year: %d\n", day_of_year(month, day, year));
     */

    /*
    int n, k;
	
    printf("Enter a number and the desired digit: ");
    scanf("%d%d", &n, &k);
	
    printf("Digit: %d", digit(n, k));
     */

    /*
    int num[4];
    int i;
	
    printf("Enter 4 numbers: ");
    for (i = 0; i < 4; i++)
        scanf("%d", &num[i]);
	
    printf("Largest: %d\nAverage: %.2f\nNumber positive: %d", 
                largest(num, 4), average(num, 4), num_positive(num, 4));
     */

    /*
     double num[3];
    int i;

    printf("Enter 3 numbers: ");
    for (i = 0; i < 3; i++)
        scanf("%lf", &num[i]);

    printf("Numbers: %.2lf %.2lf %.2lf\n", num[0], num[1], num[2]);

    printf("Median: %.2lf\n", median(num[0], num[1], num[2]));
    */
    
    /*
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d! = %d\n", num, fact(num));
    */
    
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d in binary: ", num);
    pb(num);
    printf("\n");
    
    return 0;
}

/* 
 * Exercise 9.2: Returns 1 if both x and y fall between 0 and n-1, inclusive.
 * Returns 0 otherwise.
 */
int check(int x, int y, int n) {
    return (x >= 0 && x < n) && (y >= 0 && y < n);
}

/* 
 * Exercise 9.4: Takes a month, day, and year and returns
 * the day of the year for that date.
 */
int day_of_year(int month, int day, int year) {
    int days_per_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, day_count = 0;

    if (year % 100 == 0 && year % 400 != 0); // do nothing - it is clearer if this case is separately checked because year % 4 == 0 is true here, but there is no leap year
    else if (year % 4 == 0) days_per_month[1] = 29; // leap year
	
	/* Alternatively (K.N. King)
	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)
	*/
	
    // Count days to beginning of month
    for (i = 0; i < (month - 1); i++)
        day_count += days_per_month[i];

    return day_count + day;
}

/*
 * Exercise 9.6: Returns the 'k'th digit from the right in n.
 * Returns 0 if k is greater than the number of digits in n.
 */
int digit(int n, int k) {
    int i;
    for (i = 1; i < k; i++)
        n /= 10;

    return n % 10;
}

int largest(int a[], int n) {
    int max = a[0];

    int i;
    for (i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];

    return max;
}

float average(int a[], int n) {
    int total = 0;

    int i;
    for (i = 0; i < n; i++)
        total += a[i];

    return total / (float) n;
}

int num_positive(int a[], int n) {
    int pos_tally = 0;

    int i;
    for (i = 0; i < n; i++)
        if (a[i] > 0)
            pos_tally++;

    return pos_tally;
}

double median(double x, double y, double z)
{
    double med = z;

    if ((x <= y) && (y <= z))
        med = y;
    else if ((x <= y) && (x <= z))
        med = z;
    else if (x <= y)
        med = x;
    else if (z <= y)
        med = y;
    else if (x <= z)
        med = x;
    // else med = z;


    return med;
}

double median2(double x, double y, double z)
{
	double med;
	
    if (x <= y)
        if (y <= z) med = y;
        else if (x <= z) med = z;
        else med = x;
	else {
		if (z <= y) med = y;
		else if (x <= z) med = x;
		else med = z;
	}
	
	return med;
}

int fact(int n)
{
	int product = n;
	
	for (int i = 1; i < (n-1); i++)
		product *= n - i;
	
	return product;
}

void pb(int n)
{
	if (n != 0)
	{
		pb(n / 2);
		putchar('0' + n % 2);
	}
}







