#include "main.h"

/**
 * print_triangle - print a triangle using #
*/

void print_triangle(int size)
{
	int i, j, k;

	j = size;
	while (size > 0)
	{
		size--;
		i = j - size;
		k = size;
		while(k > 0)
		{
			_putchar(32);
			k--;
		}
		while(i > 0)
		{
			_putchar('#');
			i--;
		}

	}
	_putchar(10);
}
