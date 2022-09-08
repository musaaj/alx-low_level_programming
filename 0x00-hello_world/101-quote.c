#include <stdio.h>

/**
* main - Print to stderr
* Description: Send text to err log
* Return: Int 0
*/

int main(void)
{
	write(2, "and that piece of art is useful\" \
- Dora Korpar, 2015-10-19\n");
	return (1);
}
