/**
 * _memset - pupulate certain number of elements
 * of a string with a particlar character value
 * @str: char pointer
 * @c: int character value to populate
 * @n: number of element of str to populate
 * Return: void
 */

void *_memset(void *str, int c, int n)
{
	int i = 0;

	while (n > 0)
	{
		*(str + 0) = (char) c;
		i++;
		n--;
	}
	return (str);
}
