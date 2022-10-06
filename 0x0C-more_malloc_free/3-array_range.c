#include <stdlib.h>

/**
 * array_range - create a range of int array
 * @min: int
 * @max: int
 * Return: int array consisting of @min to @max
 */
int *array_range(int min, int max)
{
	int i, *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(min) * (max - min));
	if (ptr == NULL)
		return (NULL);
	*ptr = min;
	for (i = 1; i <= (max - min); i++)
	{
		*(ptr + i) = min + i;
	}
	return (ptr);
}
