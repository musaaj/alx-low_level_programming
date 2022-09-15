#include "main.h"

/**
 * print_diagonal - print diagonal line
*/

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		j = i;
		while (j > 0)
		{
			_putchar(32);
			j--;
		}
		_putchar(92);
		_putchar(10);
	}
}
