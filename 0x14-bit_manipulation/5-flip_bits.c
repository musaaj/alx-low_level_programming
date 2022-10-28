#include "main.h"
/**
 * flip_bits - find the number of bits to be flipped to convert
 * convert a number to another number
 * @n: int
 * @m: int
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_bits(n ^ m));
}

/**
 * count_bits - count the number of set bits in a number
 * @n: unsigned int
 * Return: unsigned int
 */
unsigned int count_bits(unsigned int n)
{
	unsigned int count = 0;

	while (n)
	{
		n &= (n - 1);
		count++;
	}
	return (count);
}
