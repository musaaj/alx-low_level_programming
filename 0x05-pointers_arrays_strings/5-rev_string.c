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
	static char str[1000];

	len--;
	i = len;

	while (len >= 0)
	{
		str[len] = s[len];
		len--;
	}
	s = str;

}
