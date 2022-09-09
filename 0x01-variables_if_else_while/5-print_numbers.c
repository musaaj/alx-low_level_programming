#include <stdio.h>

/**
* main - prints alphabets
*in lower case
* Return: int 0
*/

int main(void)
{
	int letter;

	for (letter = 48; letter < 58; letter++)
	{
		putchar(letter);
	}

	putchar(10);
	return (0);
}
