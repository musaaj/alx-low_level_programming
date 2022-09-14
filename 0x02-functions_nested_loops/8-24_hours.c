#include "main.h"

/**
 * jack_bauer - print in clock format
 * Return: void
*/
void jack_bauer(void)
{
	int h, m, hchar, mchar, hchar1, mchar1, z = 48;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			hchar = h % 10;
			mchar = m % 10;
			hchar1 = h - hchar;
			mchar1 = m - mchar;
			if (hchar1 < 0)
				hchar1 = hchar1 * (-1);
			if (mchar1 < 0)
				mchar1 = mchar1 * (-1);
			if (hchar1 >= 10)
				hchar1 = hchar1 / 10;
			if (mchar1 >= 10)
				mchar1 = mchar1 / 10;
			_putchar(hchar1 + z);
			_putchar(hchar + z);
			_putchar(':');
			_putchar(mchar1 + z);
			_putchar(mchar + z);
			_putchar(10);
		}
	}
}
