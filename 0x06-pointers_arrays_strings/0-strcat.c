#include "main.h"
#include "string.h"
#include "strnlen.c"

/**
* _strcat - concate 2 string
* @dest: string
* @src: string
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len1 = _strlen(dest);
	int len2 = _strlen(src);
	int nlen = len1 + len2;

	while (src[i] != EOS)
	{
		if (i >= nlen)
			break;
		dest[len1 + i] = src[i];
		i++;
	}
	nlen++;
	dest[nlen] = EOS;
	return (dest);
}

