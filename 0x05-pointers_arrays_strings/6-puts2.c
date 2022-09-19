#include <stdio.h>
#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - print every other element of a string
 * @str: string to be printed to the std
*/

void puts2(char *str)
{
	int len = _strlen(str);
	int i = 0;

	len--;
	while (len >= 0)
	{
		putchar(str[i]);
		len -= 2;
		i += 2;
	}
	putchar(10);
}
