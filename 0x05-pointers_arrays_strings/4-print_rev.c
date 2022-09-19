#include <stdio.h>
#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - print string in rev direction
 * @s: string
*/

void print_rev(char *s)
{
	int len = _strlen(s);

	len--;

	while (len > 0)
	{
		putchar(s[len]);
		len--;
	}
	putchar(10);
}
