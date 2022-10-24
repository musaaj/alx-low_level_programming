#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - print elements of an int array
 * @h: listint object
 * Return: number of elements printed
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
