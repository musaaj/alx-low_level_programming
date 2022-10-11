#include "dog.h"
#include <stdlib.h>

void _strcpy(char *d, char *s)
{
	if ((d == NULL) || (s == NULL))
		return;
	while (*s)
	{
		*d = *s;
		d++;
		s++;
	}
	*d = *s;
}
