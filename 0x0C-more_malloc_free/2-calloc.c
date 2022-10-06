#include <stdlib.h>

/**
 * _calloc - allocates memory and fill with each with
 * @nmemb: size of data type to allocate
 * @size: number of slot if @nmemb to allocate
 * Return: address of first element of the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	char *ptr;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= (nmemb * size); i++)
	{
		*(ptr + i) = 0;
	}
	return (ptr);
}
