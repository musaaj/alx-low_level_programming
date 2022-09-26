/**
 * _strchr - find the first occurence of a char in a string
 * @s: string to search through
 * @c: char to look for
 * Return: pointer to first occurence of c if found else return NULL
*/

char *_strchr(char *s, char c)
{
	static char nil = 0;

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (&nil);
}
