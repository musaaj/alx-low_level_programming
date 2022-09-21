#include "main.h"
#include "string.h"

/**
 * _strncpy - replace elements of a string elements of another string
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of elements to copy
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (dest[i] != EOS)
	{
		dest[i] = 0;
		i++;
	}
	dest[i] = 0;
	i = 0;
	while (i <= n)
	{
		if (src[i] != EOS)
			dest[i] = src[i];
		else
			dest[i] = EOS;
		i++;
	}
	i++;
	dest[i] = EOS;
	return (dest);
}

