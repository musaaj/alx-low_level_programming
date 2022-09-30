#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - print the name of the programme
 * @argc: length of cli args
 * @argv: list of cli args
 * Return: zero always
*/
int is_number(char *s);

int main(int argc, char **argv)
{
	int sum = 0, i;
	
	for (i = 1; i < argc - 1; i++)
	{
		if (is_number(argv[i]))
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * is_number - tell whether a string is number or not
 * @s: string
 * Return: 1 if @s is a number otherwise 0
*/
int is_number(char *s)
{
	if (strlen(s) == 0)
		return (0);
	if (!isdigit(*s))
		return (0);
	if (*s == '\0')
		return (1);
	return is_number((s + 1));
}
