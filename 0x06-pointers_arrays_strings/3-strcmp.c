#include "main.h"
#include "string.h"
#include "strlen.c"

/**
* _strcmp - compare 2 string
* @s1: string
* @s2: string
* Return: int
*/

int _strcmp(char *s1, char *s2)
{
	int len1 = _strlen(s1), len2 = _strlen(s2);
	int dff = len1 - len2, i = 0, result = 0;

	if (dff < 0)
		dff *= -1;
	len1 += dff;
	for (i = 0; i < len1; i++)
	{
		if (s1[i] - s2[i] != 0)
		{
			result = s1[i] - s2[i];
			break;
		}
	}
	return (result);
}

