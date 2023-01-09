#include "string.h"

/**
 * _strdup - create a duplicate of a string
 * @s: string
 * Return: duplicate of @s on success else NULL
 */
char *_strdup(const char *s)
{
	char *dup;
	unsigned int len, i;

	if (!s)
		return (NULL);
	len = strlen(s);
	if (!len)
		return (NULL);
	dup = malloc(sizeof(char) * len);
	if (!dup)
		return (NULL);
	for (i = 0; i <= len; i++)
		dup[i] = s[i];
	return (dup);
}
