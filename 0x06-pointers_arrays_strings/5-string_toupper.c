#include "main.h"
#include "strlen.c"
/**
* string_toupper - convert a string to uppercase
* @s: char array
* Return: char array
*/

char *string_toupper(char *s)
{
	int i, len = _strlen(s);

	for (i = 0; i <= len; i++)
	{
		if ((s[i] >= 97) && (s[i] <= 122))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}

