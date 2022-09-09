#include <stdio.h>

/**
* main - prints alphabets
*in lower case
* Return: int 0
*/

int main(void)
{
	int letter;

	for (letter = 122; letter > 96; letter--)
	{
		putchar(letter);
	}

	putchar(10);
	return (0);
}
