/**
 * _strchr - find the first occurence of a char in a string
 * @s: string to search through
 * @c: char to look for
 * Return: pointer to first occurence of c if found else return NULL
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s)
			return (s);
		s++;
	}
	return (*s);
}
