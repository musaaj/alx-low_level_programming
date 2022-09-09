#include <stdio.h>

/**
* main - prints alphabets
*in lower case
* Return: int 0
*/

int main(void)
{
	int letter = 97;

	for (letter; letter < 123; letter++)
	{
		putchar(letter);
	}
	putchar(10);
	return (0);
}
