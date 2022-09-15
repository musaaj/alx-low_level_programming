#include <stdio.h>

/**
 * fizzbuzz - print fizzbuzz 
*/

void fizzbuzz(void)
{
	int i;
	
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%c", "FizzBuzz");
		}
		else if ((i % 3 == 0) && (i % 5 != 0)) 
		{
			printf("%c", "Fizz");
		}
		else if ((i % 3 != 0) && (i % 5 == 0))
		{
			printf("%c", "Buzz");
		}
		else
		{
			printf("%d", i);
		}
		putchar(10);
	}
}
