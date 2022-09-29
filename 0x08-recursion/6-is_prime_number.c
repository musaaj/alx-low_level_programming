#include "main.h"

/**
 * is_prime_number - check whether a number is prime or not
 * @n: int
 * Return: 1 if @n is prime otherwise 0
*/
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n == 1)
		return (0);
	if (n == 0)
		return (0);
	if (n % 2 == 0)
		return (0);
	return (is_prime(2, n));
}

/**
 * is_prime - check for prime number
 * @i: int initial check condition
 * @n: int number to be checked
 * Return: 1 if @n is prime otherwise 0
*/
int is_prime(int i, int n)
{
	int hv = n / 2;

	if (n % i == 0)
		return (0);
	if (i == hv)
		return (1);
	return (is_prime(i + 1, n));
}
