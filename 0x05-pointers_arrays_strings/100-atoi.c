#include "2-strlen.c"
#include "main.h"

/**
 * _atoi - converts a string to int
 * @s: array of char
 * Returns: int equivalent of s
*/

int _atoi(char *s)
{
    int i = 0, j = 0, num = 0;
    int pow = 1, sign = 1;
    int len = _strlen(s);

    len--;
    while (len > 0)
    {
        pow *= 10;
        len--;
    }
    if (s[0] == 45)
    {
        sign *= -1;
        pow /= 10;
    }
    while (s[i] != '\0')
    {
        if(s[i] != 45)
        {
            j = s[i] - 48;
            j *= pow;
            num += j;
        }
        
        i++;
    }
    num *= sign;
    return (num);
    
}