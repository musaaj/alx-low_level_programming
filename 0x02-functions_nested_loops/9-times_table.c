#include "main.h"

/**
 * times_table - print 9 times table
 * Return: void
*/

void times_table(void)
{
	int i, j, k, l, m, n, z = 48;
	char num[] = {',', ',', ','};

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			m = 0;

			if( k == 0) 
			{
				num[m] = 48;
			}
			else
			{

			while (k > 0)
			{
				l = k % 10;
				num[m] = l + z;
				k -= l;
				k /= 10;
				m++;

			}

			for (m = 2; m >= 0; m--)
			{
				n = num[m];
				if (n != ',')
					_putchar(n);
			}
			}

			_putchar(44);
			_putchar(32);
		}
		_putchar(10);
	}
	
}
