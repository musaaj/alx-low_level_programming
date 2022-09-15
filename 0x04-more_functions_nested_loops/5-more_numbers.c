/**
 * more_numbers - print 0 to 14 to times
*/

void more_numbers(void)
{
	int i, j, k;
	char _char[2];

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_char = itoc(j);
			for (k = 2; k > 0; k--)
			{
				if(_char[k] = ',')
					continue;
				_putchar(_char[k]);
			}
		}
		_putchar(10);
	}

/**
 * itoc - convert number to its ascii eq
 * @c: int number
 * Return: char array
*/

char *itoc(int c)
{
	int z = 48, i, k;
	static char _char[] = {',', ','};

	if(c == 0)
		_char[0] = z;
	else
	{
		while (c > 0)
		{
			k = c  % 10;
			_char[i] = k + z;
			c = c / 10;
		}
	
		return (_char);
}
