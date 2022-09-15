/**
 * _isdigit - checke whether argument is a digit
 * @c: int ascii code
 * Return: int 1 if c is a digit else
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}
