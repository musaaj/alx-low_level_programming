#include "main.h"
int _sqrt_recursion(int n)
{
	return (_sqrt(0, n));

}

int _sqrt(int i, int n)
{
	int hv = n / 2;

	if (i * i == n)
		return (i);
	if (i >= hv)
		return (-1);
	i++;
	return (_sqrt(i, n));
}
