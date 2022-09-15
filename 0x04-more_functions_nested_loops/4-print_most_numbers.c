#include "main.h"
/**
 * print_most_numbers - print digits
 * Return: void
*/

void print_most_numbers(void)
{
	int a = 48, i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
			continue;
		a = a + i;
		_putchar(a);
		a = 48;
	}
	_putchar(10);
}
