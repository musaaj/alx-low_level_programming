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
		if (s[i] == 32)
		{
			if ((s[i + 1] >= 97) && (s[i + 1] <= 122))
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}

