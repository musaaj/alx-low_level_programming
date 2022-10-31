#include "main.h"

/**
 * _strlen - find the number of char in a string
 * @str: a null terminated byte string
 * Return: number of char in @str
 */
size_t _strlen(char *str)
{
	size_t len = 0;

	if (!str)
		return (len);
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
