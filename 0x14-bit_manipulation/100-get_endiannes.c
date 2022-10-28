#include "main.h"
/**
 * get_endiannes - get endiannes of a mechine
 * Return: 1 if little endiannes else 0
 */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *) &i;

	if (*c)
		return (1);
	return (0);
}
