#include "main.h"

/**
 * _sqrt_recursion - find natural sqrt of a number
 * @n: int
 * Return: natural sqrt of @n if it has otherwise 1
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(0, n));

}

/**
 * _sqrt - check whether a given number has a natural sqrt
 * @i: int
 * @n: int
 * Return: sqrt of @n
*/
int _sqrt(int i, int n)
{
	int hv = n / 2;

	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	if (i * i == n)
		return (i);
	if (i >= hv)
		return (-1);
	return (_sqrt(i + 1, n));
}
