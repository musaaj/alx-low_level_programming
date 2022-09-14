#include "main.h"

/**
 * times_table - print 9 times table
 * Return: void
*/

void times_table(void)
{
	int i, j, k, l, m, z = 48;
	char num[] = {',', ',', ','};

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;

			while (k > 0)
			{
				l = k % 10;
				num[m] = l + z;
				k -= l;
				k /= 10;

			}

			for (m = 2; m > 0; m--)
			{
				if (num[m] != ',')
					_putchar(num[m]);
			}

			_putchar(44);
			_putchar(32);
		}
		_putchar(10);
	}
}
