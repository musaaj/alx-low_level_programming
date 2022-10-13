#include "3-calc.h"

/**
 * op_add - add two integers
 * @a: int
 * @b: int
 * Return: sum of @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract an integer from another
 * @a: int
 * @b: int
 * Return: result of @a subtract @b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: int
 * @b: int
 * Return: product of @a and @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide an integer by another integer
 * @a: int dividend
 * @b: int divisor
 * Return: quotient of @a divided by @b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - find the remainder of division of two integers
 * @a: int dividend
 * @b: int divisor
 * Return: remainder of @a divided by @b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

