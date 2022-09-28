#include "2-strlen_recursion.c"
#include "_putchar.c"
/**
 * _print - print string in rev order
 * @s: str
 * @len: int length of @s
*/
void _print(char *s, int len)
{
	len--;
	_putchar(s[i]);
	_print(s, len);
}

/**
 * _print_rev_recursion - print string in reverse order
 * @s: str
*/
void _print_rev_recursion(char *s)
{
	int len = _strlen_recursion(s);

	_print(s, len);
}


