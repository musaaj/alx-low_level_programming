#include "function_pointers.h"
#include <stdlib.h>
/**
* int_index - find first index of occurence of an integer in an
* integer array
* @array: int array
* @size: number of element of @array
* @cmp: function to compare
* Return: int;
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);

}
