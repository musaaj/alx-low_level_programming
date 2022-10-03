#include <stdlib.h>

/**
 * create_array - create an array prepopulated with a giving char
 * @size: int
 * @c: char
 * Return: char array populated with @c
 */

char *create_array(unsigned int size, char c)
{
	char *chr = NULL;
	unsigned int i;

	chr = (char *) malloc(size);
	if (size == 0)
		return (NULL);
	if (chr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		chr[i] = c;
	}
	return (chr);
}
