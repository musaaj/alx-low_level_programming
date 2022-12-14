/**
 * _pow_recursion - raise number to a power
 * @x: base
 * @y: index
 * Return: @x raised to power of @y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
