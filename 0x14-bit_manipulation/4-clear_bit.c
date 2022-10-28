#include "main.h"
/**
 * clear_bit - set a of an int to 0 at a given index
 * @n: unsigned int pointer
 * @index: unsigned int
 * Return: 1 on success else 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if ((n == NULL) | (index > 31))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
