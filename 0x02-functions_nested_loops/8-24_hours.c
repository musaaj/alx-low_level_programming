#include "main.h"

void jack_bauer(void)
{
	int h, m, hchar, mchar, z = 48;

	while ((h <= 23) && (m <= 59))
	{
		hchar = h % 10;
		mchar = m % 10;
		_putchar(h + z);
		_putchar(hchar + z);
		_putchar(58);
		_putchar(m + z);
		_putchar(mchar + z);
		_putchar(10);
		m += 1;
		if (m >= 59)
		{
			h += 1;
			m = 0;
		}

	}
}
