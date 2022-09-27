/**
 * _strchr - find the first occurence of a char in a string
 * @s: string to search through
 * @c: char to look for
 * Return: pointer to first occurence of c if found else return NULL
*/

char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	unsigned int len = _strlen(s);

	while (i <= len)
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return (s + i);
}
