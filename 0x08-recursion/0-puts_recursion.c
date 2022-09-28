#include "main.h"
/**
 * _puts_recursion - print string to std
 * @s: string
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
