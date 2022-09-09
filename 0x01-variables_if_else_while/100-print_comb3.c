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

	for (num = 48; num < 58; num++)
	{
		for (i = 48; i < 58; i++)
		{
			if (i == num)
				continue;
			if (i > num)
			{
				putchar(num);
				putchar(i);
				if (num != 56)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	return (0);
}
