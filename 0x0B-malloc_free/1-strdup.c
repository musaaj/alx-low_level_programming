#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicate a string
 * @str: string
 * Return: pointer to first element of duplicate of @str
 */
char *_strdup(char *str)
{
	char *ptr = NULL;
	unsigned int i = 0, len = strlen(str);

	ptr = (char *) malloc(len);
	if (str == NULL)
		return (str);
	if (ptr == NULL)
		return (ptr);
	for (i = 0; i <= len; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
