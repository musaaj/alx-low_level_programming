#include "main.h"

/**
 * print_diagonal - print diagonal line
*/

void print_diagonal(int n)
{
	int i;
	int j = n;

	while (n > 0)
	{
		i = j;
		while (i > 0)
		{
			_putchar(32);
			i--;
		}
		_putchar('\\');
		_putchar(10);
	}
}
