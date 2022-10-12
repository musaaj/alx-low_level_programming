#include "function_pointers.h"
/**
* print_name - print a given name
* @a: string
* @f: void function pointer
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
