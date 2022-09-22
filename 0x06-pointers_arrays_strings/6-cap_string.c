#include "main.h"
#include "strlen.c"
/**
* cap_string - capitallize each word of a string
* @s: char array
* Return: char array
*/

char *cap_string(char *s)
{
	int i = 0, len = _strlen(s);

	for (i = 0; i <= len; i++)
	{
		if (is_seperator(s[i]))
		{
			if ((s[i + 1] >= 97) && (s[i + 1] <= 122))
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}

/**
* is_seperator - check whether a given character is a
* a word seperator character
* @c: char
* Return: 1 if c is a word seperator else 0
*/

int is_seperator(char c)
{
	char seperators[] = {10, 9, 12, 13, 32, 33,
	34, 46, 59, 63, 40, 41, 123, 125, 44};
	int i;

	for (i = 0; i < 15; i++)
	{
		if (c == seperators[i])
			return (1);
	}
	return (0);
}
