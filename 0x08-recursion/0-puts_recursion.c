#include "putchar.c"
/**
 * _puts_recursion - print string to std
 * @s: string
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
