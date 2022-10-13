#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - returns a function based of the giving operand
 * @s: either of +, -, *, /, or %
 * Return: address of the right function for giving operand.
 * If the operand is not one of *, -, +, %, / returns null
 */
int (*get_op_func(char *s))(int, int)
{
	char ops[] = {'+', '-', '*', '/', '%', '\0'};
	int index = 0;
	int (*funcs[])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod, NULL};

	while (index < 6)
	{
		if (*s == ops[index])
			return (*funcs[index]);
		index++;
	}
	return (*funcs[5]);
}
