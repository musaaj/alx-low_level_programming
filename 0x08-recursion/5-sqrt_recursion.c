int _sqrt_recursion(int n)
{
	int hv = n / 2;

	if (_sqrt_recursion(n) * _sqrt_recursion(n) == n)
	{
		return (_sqrt_recursion(n));
	}
	if (_sqrt_recursion(n) == hv)
	{
		return (-1);
	}
	return (1 + _sqrt_recursion(n));
}
