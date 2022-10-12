#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
* array_iterator - iterate over a giving array
* @array: int
* @size: int length of @array
* @action: func to call for each element
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action == NULL)
		return;
	if (array == NULL)
		return;
	if (size == 0)
		return;
	while (i < size)
	{
		action(array[i]);
	}
}
