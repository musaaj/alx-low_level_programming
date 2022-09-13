#include "main.h"

/**
 * _islower - check whether a given alphabet is lower case or not
 * Return: int 1 if is lower otherwise 
*/

int _islower(int a)
{
	if ((a >= 97) && (a <= 122))
		return 1;
	return 0;
}
