#include "main.h"
#include <unistd.h>
/**
 * print_binary - print a number in binary form
 * @n: umsigned int
 */
void print_binary(unsigned long int n)
{
	char c;

	while (n)
	{
		c = n & 1;
		c = c + 48;
		write(1, &c, 1);
		n >>= 1;
	}
}
