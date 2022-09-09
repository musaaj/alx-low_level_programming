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
		printf("%i is negative\n", n);

	if (n > 0)
		printf("%i is positive\n", n);

	if (n == 0)
		printf("%i is zero\n", n);

	return (0);
}
