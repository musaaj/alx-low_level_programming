#include "main.h"
#include <unistd.h>
/**
 * print_binary - print a number in binary form
 * @n: umsigned int
 */
void print_binary(unsigned long int n)
{
	char c = 48;
	char s[32];
	int i = 31, count = 0;

	s[i] = '\0';
	if (!n)
		write(1, &c, 1);
	while (n)
	{
		i--;
		if (n & (n & 1))
			c = 49;
		else
			c = 48;
		s[i] = c;
		n >>= 1;
		count++;
	}
	write(1, &s[i], count);
}
