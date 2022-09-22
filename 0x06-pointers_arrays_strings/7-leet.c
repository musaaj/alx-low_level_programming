#include "main.h"
#include "string.c"

/**
* leet - encode some characters
* @s: char array
* Return: s encoded
*/

char *leet(char *s)
{
	replace(s, "aA", 52);
	replace(s, "eE", 51);
	replace(s, "oO", 48);
	replace(s, "tT", 55);
	replace(s, "lL", 49);
	return (s);
}

/**
* replace - replace some characters in a given string
* @dest: char array to work on
* @chk: char array to be replaced
* @rplc: char to replace any character in chk
* Return: dest encoded
*/

char *replace(char *dest, char *chk, char rplc)
{
	int i = 0, j = 0;

	while (dest[i] != EOS)
	{
		j = 0;
		while (chk[j] != EOS)
		{
			if (dest[i] == chk[j])
				dest[i] = rplc;
			j++;
		}
		i++;
	}
	return (dest);
}

