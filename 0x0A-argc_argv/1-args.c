#include <stdio.h>
/**
 * main - print the length of args passed to the programm
 * @argc: length of cli args
 * @argv: list of cli args
 * Return: zero always
*/

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
