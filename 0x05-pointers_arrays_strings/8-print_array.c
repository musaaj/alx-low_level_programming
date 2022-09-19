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
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i < (n - 1))
		{
			printf(", ");
		}
		i++;
	}
	putchar(10);
}


