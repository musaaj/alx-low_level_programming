#include <stdio.h>

/**
* main - prints alphabets
*in lower case
* Return: int 0
*/

int main(void)
{
	int letter;

	for (letter = 48; letter < 103; letter++)
	{
		if (letter > 57 & letter < 97)
			continue;
		putchar(letter);
	}
	putchar(10);
	return (0);
}
