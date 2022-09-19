#include "main.h"

/**
 * _strlen - finds length of a given string
 * @s: string
 * Return: int length of s
*/

int _strlen(char *s)
{
	int len = 0, i = 0;

	while (s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}
