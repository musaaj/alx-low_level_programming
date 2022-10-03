#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	static char *chr = NULL;
	int i;

	chr = (char *) malloc(size);
	if ( chr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		chr[i] = c;
	}
	return (chr);
}
