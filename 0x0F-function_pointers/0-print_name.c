#include "function_pointer.h"
/**
* print_name - print a given name
* @a: string
* @f: void function pointer
*/
void print_name(char *name, void (*f)(char *))
{
	if ((f) == NULL)
		return;
	(i*f)(name);
}
