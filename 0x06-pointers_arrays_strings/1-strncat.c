#include "main.h"
#include "string.h"
#include "strlen.c"
/**
* _strncat - concate 2 string
* @dest: string
* @src: string
* @n: number of characters to append to dest
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len1 = _strlen(dest);
	int nlen = len1 + n;

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

