#include "function_pointers.h"
#include <stdlib.h>
/**
* print_name - print a given name
* @name: string
* @f: void function pointer
*/
void print_name(char *name, void (*f)(char *))
{
	if ((name == NULL) || (f == NULL))
		return;
	(*f)(name);
}
