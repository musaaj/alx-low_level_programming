#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - find number of non null characters in a string
 * @s: string
 * Return: int number of characters in @s
 */
int _strlen(char *s)
{
	int i = 0;
	if (s == NULL)
		return (0);
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}
