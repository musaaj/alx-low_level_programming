#include "main.h"
/**
 * get_bit - get the value of bit at an index of a number
 * @n: usigned long int
 * @index: unsigned int
 * Returm: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 31)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
