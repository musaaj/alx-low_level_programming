#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Print whether a number is negative or not
* Description: Check whether a given number is negative or not
* Return: Int 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		print("%i is negative", n);

	if (n > 0)
		print("%i is positive", n);

	if (n == 0)
		print("%i is zero", n);

	return (0);
}
