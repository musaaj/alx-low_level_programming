#include "main.h"

/**
 * main - print lowercase alphabet
 * Return: int 
*/

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
