#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concate @s1 with @n number of chars from @s2
 * @s1: string
 * @s2: string
 * @n: unsigned int
 * Return: char pointer to the memory address of concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len;
	unsigned int i, j = 0;
	char *str, *s3, *s4;

	if (s1 != NULL)
	{
		s3 = s1;
	}
	else
	{
		s3 = "";
	}
	if (s2 != NULL)
	{
		s4 = s2;
	}
	else
	{
		s4 = "";
	}
	len = strlen(s3);
	if (n >= strlen(s4))
		n = strlen(s4);
	str = malloc(sizeof(char) * (len + n));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		str[i] = s3[i];
	}
	for (i = len; i < (len + n); i++)
	{
		str[i] = s4[j];
		j++;
	}
	str[i] = '\0';
	return (str);
}
