// The censor function takes every instance of 'poo' and replaces it with 'xxx'

#include <stdio.h>

#define STR_LEN 128

void censor(char str[], int n);
int read_line(char str[], int n);

int main(void)
{
	char str[STR_LEN];
	
	printf("Enter something: ");
	read_line(str, STR_LEN);
	printf("Censored: ");
	censor(str, STR_LEN);
	printf("%s", str);
	
	return 0;
}

// Censors all instances of 'poo' with 'xxx'
void censor(char str[], int n)
{
	for (char *p = str; *p && p < p + n; p++)
	{
		if (*p == 'p' && *(p+1) == 'o' && *(p+2) == 'o')
		{
			*p = *(p+1) = *(p+2) = 'x';
			p += 2;
		}
	}
}
		
int read_line(char str[], int n)
{
	int ch, i = 0;
	
	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';		// Terminates string
	
	return i;			// Number of characters stored
}
