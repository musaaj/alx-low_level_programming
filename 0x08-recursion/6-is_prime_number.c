#include "main.h"

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n == 1)
		return (0);
	if (n == 0)
		return (0);
	return (is_prime(0, n));
}

int is_prime(int i, int n)
{
	int hv = n / 2;

	if (i > hv)
		return (0);
	if (n % i == 0)
		return (1);
	return (is_prime(i + 1, n));
}
