/**
 * _strchr - find the first occurence of a char in a string
 * @s: string to search through
 * @c: char to look for
 * Return: pointer to first occurence of c if found else return NULL
*/

char *_strchr(char *s, char c)
{
	int i = 0;
	int len = _strlen(s);

	while (i <= len)
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return (NULL);
}

/**
 * _strlen - finds length of a given string
 * @s: string
 * Return: int length of s
*/

int _strlen(char *s)
{
	int len = 0, i = 0;

	while (s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}
