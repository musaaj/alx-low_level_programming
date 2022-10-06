#include "strlen.c"

/**
 * _isdigit - checke whether argument is a digit
 * @c: int ascii code
 * Return: int 1 if c is a digit else
 */
int _isdigit(char c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}

int _isnumber(char *s)
{
	int i, len = _strlen(s);

	for (i = 0; i < len; i++)
	{
		if (!_isdigit(s[i]))
			return (0);
	}
	return (1);
}
