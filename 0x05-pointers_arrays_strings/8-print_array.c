#include <stdio.h>
#include "main.h"
#include "2-strlen.c"


/**
 * print_array - print certain number of an array
 * @a: int array
 * @n: int number of elements of a to print
*/

void print_array(int *a, int n)
{
	char *chr;
	int i = 0;

	while (i < n)
	{
		chr = itoc(a[i]);
		_put(chr);
		putchar(44);
		putchar(32);
		i++;
	}
	putchar(10);
}

/**
 * itoc - convert digits of integer to their ascii rep
 * @n: int
 * Return: char array
*/

char *itoc(int n)
{
	static char chr[100];
	int i = 0, j = 0;

	for (i = 0; i < 100; i++)
	{
		chr[i] = '\0';
	}
	i = 0;
	if (n < 0)
	{
		chr[100] = '-';
		n *= -1;
		n--;
	}
	while (n > 0)
	{
		j = n % 10;
		chr[i] = j + 48;
		n /= 10;
		i++;
	}
	return (chr);
}

/**
 * _put - suffles and print a string
 * @str: char
*/

void _put(char *str)
{
	int len = _strlen(str);

	while (len >= 0)
	{
		putchar(str[len]);
		len--;
	}
}
