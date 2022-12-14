#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - main entry of our program
 * @argc: argument count
 * @argv: list of cli arguments
 * Return: zero on success
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*f)(int, int);
	char *op;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	if(((*op == '/') && b == 0) || ((*op == '%') && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	f = (*get_op_func)(op);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", (*f)(a, b));
	return (0);
}
