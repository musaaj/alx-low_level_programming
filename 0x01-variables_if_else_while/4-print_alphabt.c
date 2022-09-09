#include <stdio.h>

/**
* main - prints alphabets
*in lower case
* Return: int 0
*/

int main(void)
{
	int letter;

	for (letter = 97; letter < 123; letter++)
	{
		if (letter == 101 || letter == 113)
			continue;
		putchar(letter);
	}

	putchar(10);
	return (0);
}
