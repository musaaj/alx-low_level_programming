#include <stdio.h>
#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - print the second halve of a string
 * @str: string
*/

void puts_half(char *str)
{
	int len, halve;

	len = _strlen(str);
	halve = (len / 2);

	if ((len % 2) == 1)
		halve++;
	while (str[halve] != '\0')
	{
		putchar(str[halve]);
		halve++;
	}
	putchar(10);
}
