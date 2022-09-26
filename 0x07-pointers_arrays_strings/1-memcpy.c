/**
 * _memcpy - copies memory of one pointer to another
 * @dest: pointer to copy to
 * @src: pointer to copy from
 * @n: number of byte to copy
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
