/* Given a word, this program prints out it's score in Scrabble 
 * 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char letter;
   	int score = 0;

	printf("Enter a word: ");
	letter = toupper(getchar());

	while(letter != '\n')
   	{
		switch (letter)
		{
			case 'A': case 'E': case 'I': case 'L': case 'N': 
			case 'O': case 'R': case 'S': case 'T': case 'U':
				score += 1;
				break;

			case 'D': case 'G':
				score += 2;
				break;

			case 'B': case 'C': case 'M': case 'P':
				score += 3;
				break;

			case 'F': case 'H': case 'V': case 'W': case 'Y':
				score += 4;
				break;

			case 'K':
				score += 5;
				break;

			case 'J': case 'X':
				score += 8;
				break;

			case 'Q': case 'Z':
				score += 10;
				break;

			default: break;
		}

		letter = toupper(getchar());

	}

	printf("Score: %d\n", score);

	return 0;
}
