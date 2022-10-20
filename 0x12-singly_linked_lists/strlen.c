#include "lists.h"
/**
 * _strlen - find lenght of a string
 * @s: const char array
 * Return: size_t
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	if (s == NULL)
	{
		return (0);
	}
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
