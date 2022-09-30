#include <stdio.h>
#include <string.h>
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
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
