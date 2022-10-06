#include <stdlib.h>

/**
 * malloc_checked - allocate memory space and make neccessary checks
 * @b: unsigned int number of bytes to allocate
 * Return: void pointer to the memory address allocated
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
