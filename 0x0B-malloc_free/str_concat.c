#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concate two strings
 * @s1: string
 * @s2: string
 * Return: pointer to first element of dstring containing @s1, @s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2, j = 0;
	char *str = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	str = malloc(len1 + len2);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	i = 0;
	for (j = len1; j <= len1 + len2; j++)
	{
		str[j] = s2[i];
		i++;
	}
	return (str);
}
