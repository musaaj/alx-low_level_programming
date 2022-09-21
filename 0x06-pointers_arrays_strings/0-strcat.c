#include "main.h"
#include "0x05-pointers_arrays_strings/2-strlen.c"

/**
 * _strcat - joins two strings 
 * @s1: string to be joined to
 * @s2: string to be joined
 * Return: string, s1 and s2 joined
*/

char *_strcat(char *s1, char *s2)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int nlen = len1 + len2;
    int i = 0;

    nlen++;
    while (len1 < nlen)
    {
        s1[len1] = s2[i];
        len1++;
        i++;
    }
    s1[len1] = '\0';
    return (s1);
}
