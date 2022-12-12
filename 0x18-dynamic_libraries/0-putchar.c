#include "main.h"
#include <unistd.h>

/**
 * main - main entry
 * Return: int
*/

int _putchar(char c)
{
	return write(1, &c, 1);
}
