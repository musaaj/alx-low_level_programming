#include "main.h"
#include "2-strlen_recursion.c"

/**
 * _print_rev_recursion - print string in reverse order
 * @s: str
*/
void _print_rev_recursion(char *s)
{
	int len = _strlen_recursion(s);

	_print(s, len - 1);
}

/**
 * _print - print string in rev order
 * @s: str
 * @len: int length of @s
*/
void _print(char *s, int len)
{
	if (len < 0)
		return;
	_putchar(s[len]);
	_print(s, len - 1);
}


