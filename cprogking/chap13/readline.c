// Variations on the read_line function from Chapter 13

#include <stdio.h>

#define STR_LEN 128

int read_line(char str[], int n);
int read_line_a(char str[], int n);
int read_line_b(char str[], int n);
int read_line_c(char str[], int n);

int main(void)
{
	char str[STR_LEN];
	
	printf("Enter something: ");
	read_line_c(str, STR_LEN);
	
	printf("read_line_c: %s and here's some other stuff.", str);
	return 0;
}

// Original read_line function
int read_line(char str[], int n)
{
	int ch, i = 0;
	
	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';		// Terminates string
	
	return i;			// Number of characters stored
}

// Skips leading whitespace
int read_line_a(char str[], int n)
{
	int ch, i = 0;
	
	while ( isspace(ch = getchar()) ) ; // Ignore leading whitespace
	
	while (ch != '\n')
	{
		if (i < n)
			str[i++] = ch;
		ch = getchar();
	}
	str[i] = '\0';		// Terminates string
	
	return i;			// Number of characters stored
}

// Stops reading at first whitespace 
int read_line_b(char str[], int n)
{
	int ch, i = 0;
	
	while ( !(isspace(ch = getchar())) )
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';		// Terminates string
	
	return i;			// Number of characters stored
}

// Stops reading at new-line, but stores new-line
int read_line_c(char str[], int n)
{
	int ch, i = 0;
	
	ch = getchar();
	while (i < n)
	{
		str[i++] = ch;
		if (ch == '\n') break;
		ch = getchar();
	}
	str[i] = '\0';		// Terminates string
	
	return i;			// Number of characters stored
}

// Leaves behind characters it has no room for
int read_line_d(char str[], int n)
{
	int ch, i = 0;
	
	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
		else
			break;
	str[i] = '\0';		// Terminates string
	
	return i;			// Number of characters stored
}
