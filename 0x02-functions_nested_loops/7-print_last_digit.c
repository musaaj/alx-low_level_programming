#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: number
 * Return: last digit of n
*/

int print_last_digit(int n)
{
	int ldigit;
	int mask;

	if (n < 0)
	{
		ldigit = n % 10;
		n = n * (-1);
	}
	ldigit = n % 10;
	_putchar(ldigit + 48);
	return (ldigit);
}
