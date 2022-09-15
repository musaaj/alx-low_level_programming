#include "main.h"

/**
* print_line - print horizontal line
* @n: int length of line
*/

void print_line(int n)
{
	while (n < 0)
	{
		_putchar('_');
		n--;
	}
	_putchar(10);
}
