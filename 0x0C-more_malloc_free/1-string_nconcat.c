/**
 * string_nconcat - concate @s1 with @n number of chars from @s2
 * @s1: string
 * @s2: string
 * @n: unsigned int
 * Return: char pointer to the memory address of concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len = strlen(s1);
	int i, j = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
		n = strlen(s2);
	str = malloc(sizeof(char) * (len + n));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		str[i] = s1[i];
	}
	for (i = len; i < (len + n); i++)
	{
		str[i] = s2[j];
		j++;
	}
	str[i] = '\0';
	return (str);
}
