/**
 * _strspn - check for length of a substr in a str
 * @s: str to check  for substr
 * @accept: substr
 * Return: unsigned int span of substr in str
*/

unsigned int _strspn(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
		return (NULL);

	unsigned int i, len, j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		if (s[i] == accept[j])
		{
			while ((accept[j] != '\0') && (s[i] != '\0'))
			{
				while (s[i] == accept[j])
				{
					i++;
					j++;
				}
				len = j;
				break;
			}

		}
		i++;
	}
	return (j);
}
