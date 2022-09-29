#include "main.h"
#include "2-strlen_recursion.c"

/**
 * _print_rev_recursion - print string in reverse order
 * @s: str
*/
void _print_rev_recursion(char *s)
{
	int len = _strlen_recursion(s);

	_print(s, len);
}

/**
 * _print - print string in rev order
 * @s: str
 * @len: int length of @s
*/
int _print(char *s, int len)
{
	if (len < 0)
		return (0);
	_putchar(s[len]);
	return (_print(s, len -1));
}


