/* reverse.c reads a message and prints that message in reverse. */

#include <stdio.h>

#define STR_LEN 128

int stdin_to_array(char * message, int n);
void print_reverse(char * message, int n);

int main(void)
{
	char message[128] = {'\0'}, reversed[128];
	int length;
	
	printf("Enter a message: ");
	length = stdin_to_array(message, STR_LEN);
	printf("Reverse: ");
	print_reverse(message, length);
	printf("\n");
	
	return 0;
}

/* 
 * Reads standard input into message. Message array has length n. 
 * Returns number of characters read. 
 */
int stdin_to_array(char * message, int n)
{
	int count = 0;
	char next = getchar();
	for (int i = 0; (next != '\n') && (i < n - 1); i++) {
		message[i] = next;
		next = getchar();
		count++;
	}
	
	return count;
}

/*  Prints the reverse of message. */
void print_reverse(char * message, int n)
{
	for (int i = 1; i <= n; i++)
		if (message[n-i] != '\0')
			putchar(message[n-i]);
}





