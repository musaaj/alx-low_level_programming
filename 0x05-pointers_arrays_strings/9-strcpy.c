#include "main.h"

/**
 * _strcpy - copy a string to another string
 * @dest: char array string to copy to
 * @src: char array source to copy from
 * Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
