#include "lists.h"
#include <stdio.h>
/**
* print_list - print elements of nodes of a list_t object
* @h: list_t object
* Return: number of nodes in @h
*/
size_t print_list(const list_t *h)
{
	size_t len = 0;
	int i;
	char *s;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		len++;
		if (h->str == NULL)
			s = "(nil)";
		else
			s = h->str;
		i = h->len;
		printf("[%d] %s\n", i, s);
		h = h->next;
	}
	return (len);
}
