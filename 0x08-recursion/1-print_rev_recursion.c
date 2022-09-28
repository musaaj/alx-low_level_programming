#include "2-strlen_recursion.c"
#include "_putchar.c"
/**
 * _print - print string in rev order
 * @s: str
 * @len: int length of @s
*/
void _print(char *s, int len)
{
	if (len < 0)
	{
		_putchar(10);
		return;
	}
	_print(s, len - 1);
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


