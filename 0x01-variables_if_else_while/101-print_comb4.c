#include <stdio.h>

/**
* main - prints alphabets
*in lower case
* Return: int 0
*/

int main(void)
{
	int num;
	int i;
	int j;

	for (num = 48; num < 58; num++)
	{
		for (i = 48; i < 58; i++)
		{
			for (j = 48; j < 58; j++)
			{
				if ((i == num) & (j == i))
					continue;
				if ((i > num) & (j > i))
				{
					putchar(num);
					putchar(i);
					putchar(j);
					if (num != 55)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
