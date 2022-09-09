#include <stdio.h>

/**
* main - prints alphabets
*in lower case
* Return: int 0
*/

int main(void)
{
	for (int letter = 97; letter < 123; letter++)
	{
		putchar(letter);
	}
	putchar(10);
	return (0);
}
