#include "lists.h"
/**
 * list_len - finds number of elements in a linked list
 * @h: list_t
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
