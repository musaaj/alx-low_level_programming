#include <stdio.h>

void jack_bauer(void)
{
	int h, m, hchar, mchar, hchar1, mchar1;
	int z = 48;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			hchar = h % 10;
			hchar1 = h - hchar;
			if (hchar1 < 0)
				hchar1 = hchar1 * (-1);
			if (hchar1 >= 10)
				hchar1 = hchar1 / 10;
			mchar = m % 10;
			mchar1 = m - mchar;
			if (mchar < 0)
				mchar1 = mchar1 * (-1);
			if (mchar1 >= 10)
				mchar1 = mchar1 / 10;
			putchar(hchar1 + 48);
			putchar(hchar + 48);
			putchar(':');
			putchar(mchar1 + 48);
			putchar(mchar + 48);
			putchar(10);
		}

	}
	
}

int main()
{
	jack_bauer();
}
