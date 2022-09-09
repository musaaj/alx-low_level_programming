#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
* main - check the last digit of num
* Description: Just go through the code
* Return: int 0
*/

int main(void)
{
	int n;
	char last_char;
	int last_digit;
	char n_to_string[20];
	int len;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	sprintf(n_to_string, "%d", n);
	len = strlen(n_to_string);
	last_char = n_to_string[len - 1];
	last_digit = atoi(&last_char);
	if (n < 0)
	{
		last_digit *= -1;
	}
	printf("Last digit of %d is %d ", n, last_digit);
	if (last_digit  > 5)
		printf("and is greater than 5");
	if ((last_digit < 6) & (last_digit != 0))
		printf("and is less than 6 and not 0");
	if (last_digit == 0)
		printf("and is 0");
	printf("\n");
	return (0);
}
