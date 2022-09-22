#include "main.h"

/**
* reverse_array - compare 2 string
* @a: int array
* @n: int length of a
*/

void reverse_array(int *a, int n)
{
	int i = 0, tmp[100];

	n--;
	for (i = n; i >= 0; i--)
	{
		tmp[i] = a[n - i];
	}
	for (i = 0; i <= n; i++)
	{
		a[i] = tmp[i];
	}

}

