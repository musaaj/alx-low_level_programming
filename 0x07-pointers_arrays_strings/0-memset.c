/**
 * _memset - pupulate certain number of elements
 * of a string with a particlar character value
 * @str: char pointer
 * @c: int character value to populate
 * @n: number of element of str to populate
 * Return: str
 */

char *_memset(char *str, int c, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		*str = (char) c;
		i++;
		n--;
		str++;
	}
	return (str);
}
