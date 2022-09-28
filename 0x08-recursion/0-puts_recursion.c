#include "main.h"
/**
 * _puts_recursion - print string to std
 * @s: string
*/

void _puts_recursion(char *s)
{
	char c = *s;

	if (*s == '\0')
		return;
	_putchar(c);
	s++;
	_puts_recursion(s);
}
