#include "_print.c"
/**
 * _strlen_recursion - find the length of a given str
 * @s: str
 * Return: int length of @str
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
