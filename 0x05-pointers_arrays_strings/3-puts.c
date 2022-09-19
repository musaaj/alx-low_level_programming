#include <stdio.h>
#include "main.h"

/**
 * _puts - print string to stdout
 * @str: string
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar(10);
}
