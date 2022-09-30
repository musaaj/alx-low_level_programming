#include <stdio.h>
/**
 * main - print all the args passed to the programm
 * @argc: length of cli args
 * @argv: list of cli args
 * Return: zero always
*/

int main(int argc, char **argv)
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *(argv + i));
	}
	return (0);
}
