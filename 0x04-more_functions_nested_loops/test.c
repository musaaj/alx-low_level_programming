#include <stdio.h>
/**
 * print_numbers - print digits 0-9
 * Return: void
*/

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar(10);
	return;
}

int main(void)
{
	print_numbers();
}
