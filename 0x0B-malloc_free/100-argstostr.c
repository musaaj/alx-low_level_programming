#include "2-str_concat.c"

/**
* argstostr - turn program args to a str
* @ac: int length of program args
* @av: string program args
* Return: string
*/
char *argstostr(int ac, char **av)
{
	char *str = NULL;
	int i;

	if ((ac == 0) || (av == NULL))
		return (NULL);
	str = str_concat("", "");
	for (i = 0; i < ac; i++)
	{
		str = str_concat(str, av[i]);
		str = str_concat(str, "\n");
	}
	return (str);
}
