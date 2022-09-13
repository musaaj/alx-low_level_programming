#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: number
 * Return: last digit of n
*/

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	int ldigit = n % 10;

	_putchar(ldigit + 48);
	return (ldigit);
}
