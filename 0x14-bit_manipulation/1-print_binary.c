#include "main.h"
#include <unistd.h>
/**
 * print_binary - print a number in binary form
 * @n: umsigned int
 */
void print_binary(unsigned long int n)
{
	char c = 48;

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	c = n & 1;
	c += 48;
	write(1, &c, 1);
}
