#include "main.h"

/**
 * print_square - print a square
 * @size: size of the square
*/

void print_square(int size)
{
	int i, j;

	if ( size <= 0)
		_putchar(10);

	j = size;
	while (size > 0)
	{
		i = j;
		while (i > 0)
		{
			putchar('#');
			i--;
		}
		putchar(10);
		size--;
	}
}
