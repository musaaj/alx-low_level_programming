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
	len = _strlen(b);
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
 * _pow - raise number to a power
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

/**
 * _strlen - find the length of a given str
 * @s: str
 * Return: int length of @str
*/
int _strlen(const char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
