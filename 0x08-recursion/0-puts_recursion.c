/**
 * _puts_recursion - print string to std
 * @s: string
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return ((void) 0);
	_putchar(*s);
	s++;
	return (_puts_recursion(s));
}
