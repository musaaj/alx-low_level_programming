int is_palindrome(char *s)
{
	char cpy[1000];

}

char *rev_strcpy(char *s, char *cpy, int n, int i)
{
	if (n - i  == 0)
		return cpy;
	cpy[i] = s[n - i];
	return (rev_strcpy(s, cpy, n, i + 1));
}

int is_identical(char *s1, char *s2)
{
	if ()
}
