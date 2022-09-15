#include "main.h"

/**
 * more_numbers - print 0 to 14 to times
*/

void more_numbers(void)
{
	int i, j, k;
	char *_char;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = 1;
			_char = itoc(j);
			while (k >= 0)
			{
				if (_char[k] != ',')
				{
					_putchar(_char[k]);
				}
				k--;
			}
			*_char = ',';
			*(_char + 1) = ',';
		}
		_putchar(10);
	}
}

/**
 * itoc - convert number to its ascii eq
 * @c: int number
 * Return: char array
*/

char *itoc(int c)
{
	int z = 48, i = 0, k = 0;
	static char _char[] = {',', ','};

	if (c == 0)
		_char[0] = z;
	else
	{
		while (c > 0)
		{
			k = c  % 10;
			_char[i] = k + z;
			c = c / 10;
			i++;
		}
	}
	return (_char);
}
