#include "main.h"
/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int len, i = 0;
	unsigned int sum = 0;
	char c;

	if (b == NULL)
		return (0);
	len = strlen(b);
	while (len > 0)
	{
		c = b[i];
		c -= 48;
		if (c > 1)
			return (0);
		sum += (c * _pow(2, len - 1));
		len--;
		i++;
	}
	return (sum);
}

/**
 * _pow_recursion - raise number to a power
 * @x: base
 * @y: index
 * Return: @x raised to power of @y
*/
int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow(x, y - 1));
}
