#include "main.h"
#include "isdigit.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - print the name of the programme
 * @argc: length of cli args
 * @argv: list of cli args
 * Return: zero always
*/

int main(int argc, char **argv)
{
	int a, b;

	if (argc < 3)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	if (!_isnumber(argv[1]) || !_isnumber(argv[2]))
		exit(98);
	printf("%d\n", a * b);
	return (0);
}
