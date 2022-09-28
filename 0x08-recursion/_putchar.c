#include <unistd.h>

/**
 * _putchar - print a character to std
 * @c: ascii code of character to be printed
 * Return: int
*/

unsigned int _putchar(char c)
{
	return (write(1, &c, 1));
}
