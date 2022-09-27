/**
 * _strchr - find the first occurence of a char in a string
 * @s: string to search through
 * @c: char to look for
 * Return: pointer to first occurence of c if found else return NULL
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (c == '\0')
		return (s + i);
	return (NULL);
}

