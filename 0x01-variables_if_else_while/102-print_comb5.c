#include <stdio.h>
#include <string.h>

/**
* printchar - print a char twice
* Return: void
*/

void print_char(int d)
{
	int i;
	for (i = 0; i < 2; i++)
	{
		putchar(d);
	}
}
  
/** 
* main - prints alphabets in lower case 
* Return: int 0 
*/ 
 
int main(void)
{
 	int num;
 	int a;
 	int b;
        int i;
 	
 	for (num = 48; num < 58; num++)
 	{
 		for (i = 48; i < 58; i++)
 		{
 			for (b = 48; b < 58; b++)
 			{
 				if(b == num)
 				continue;
 				putchar(32);
 				print_char(num);
 				putchar(44);
 				putchar(32);
 				putchar(num);
 				putchar(b);
 			}
 		}
 	}
 	putchar(32);
 	print_char(57);
        putchar(10);
        return (0);
}