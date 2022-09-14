#include "main.h"

/**
 * times_table - print 9 times table
 * Return: void
*/

void times_table(void)
{
	int i, j, k, l, z = 48;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			l = k % 10;
			k = k - l;
			_putchar(l + z);
			while (k >= 10)
			{
				k = k / 10;
				_putchar(k + z);
			}
			_putchar(k + z);
			_putchar(44);
			_putchar(32);
		}
		_putchar(10);
	}
}
