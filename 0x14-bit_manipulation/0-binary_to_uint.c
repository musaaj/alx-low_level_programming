#include "main.h"
#include "pow.c"
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
		sum += c * _pow(2, len - 1);
		len--;
		i++;
	}
	return (sum);
}
