#include "main.h"

/**
 * _isalpha - check whether a given char is an english letter
 * @c: int ascii table number
 * Return: int 1 if c is alpha else 0
*/

int _isalpha(int c)
{
	if(((c >= 97) && (c <= 122)) || ((c >= 65) && (c >= 95)))
		return (1);
	return (0);
}
