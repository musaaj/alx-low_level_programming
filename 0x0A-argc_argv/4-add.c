#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int is_number(char *s);

/**
 * main - print the name of the programme
 * @argc: length of cli args
 * @argv: list of cli args
 * Return: zero always
*/

int main(int argc, char **argv)
{
	int sum = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (is_number(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
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
	int i, len;

	len = strlen(s);
	if (len < 1)
		return (0);
	for (i = 0; i < len; i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}
