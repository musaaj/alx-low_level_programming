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
		putchar(letter);
	}
	for (letter = 65; letter < 91; letter++)
	{
		putchar(letter);
	}
	putchar(10);
	return (0);
}
