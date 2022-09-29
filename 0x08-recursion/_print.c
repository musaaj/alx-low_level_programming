/**
 * _print - print string in rev order
 * @s: str
 * @len: int length of @s
*/
void _print(char *s, int len)
{
	if (len < 0)
		return;
	len--;
	_print(s, len);
}


