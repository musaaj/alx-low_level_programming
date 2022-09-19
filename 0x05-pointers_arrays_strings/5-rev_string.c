#include <stdio.h>
#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - print string in rev direction
 * @s: string
*/

void rev_string(char *s)
{
	int len = _strlen(s);
	int i = 0, j = 0;
	static char str[1000];

	len--;

	while (len >= 0)
	{
		str[i] = s[len];
		len--;
		i++;
	}
	while (j <= i)
	{
		s[j] = str[j];
		j++;
	}

}
