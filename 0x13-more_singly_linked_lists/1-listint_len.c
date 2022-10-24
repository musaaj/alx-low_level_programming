#include "lists.h"
/**
 * listint_len - find the number of elements in a listint object
 * @h: listint object
 * Return: number of elements in @h
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
