/**
 * print_most_numbers - print digits
 * Return: void
*/
void print_most_numbers(void)
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
			continue
		_putchar(i + 48);
	}
}
