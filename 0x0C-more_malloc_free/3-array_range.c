#include <stdlib.h>

/**
 * array_range - create a range of int array
 */
int *array_range(int min, int max)
{
	int i, *ptr;

	if ( min > max)
		return (NULL);
	ptr = malloc(sizeof min * (max - min));
	if (ptr == NULL)
		return (NULL);
	*ptr = min;
	for (i = 1; i <= (max - min); i++)
	{
		*(ptr + i) = min + i;
	}
	return (ptr);
}
