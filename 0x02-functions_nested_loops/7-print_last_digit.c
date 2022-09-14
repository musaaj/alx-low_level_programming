#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: number
 * Return: last digit of n
*/

int print_last_digit(int n)
{
	int ldigit;

	ldigit = n % 10;
	if (ldigit < 0)
		ldigit = ldigit * (-1);
	_putchar(ldigit + 48);
	return (ldigit);
}
