/**
 * _isupper - check wether a given char is uppercase or not
 * @c: int ascii char code
 * Return: 1 if c is uppercase otherwise
*/
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	return (0);
}
