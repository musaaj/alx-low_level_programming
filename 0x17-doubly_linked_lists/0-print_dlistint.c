#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints elements of a dlistint_t object
 * @h: head node of a dlistint_t object
 * Return: size_t number of elements printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t i;

	if (!h)
		return (0);
	tmp = h;
	i = 0;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		i++;
		tmp = tmp->next;
	}
	return (i);
}
