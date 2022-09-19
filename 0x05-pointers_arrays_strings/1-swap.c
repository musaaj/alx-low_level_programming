#include "main.h"

/**
 * swap_int - swap values of two ints
 * @a: int pointer
 * @b: int pointer
*/

void swap_int(int *a, int *b)
{
	int p, q;

	p = *a;
	q = *b;
	*a = q;
	*b = p;
}
