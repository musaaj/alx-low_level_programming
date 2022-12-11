#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - release a dlistint_t object
 * @head: head element of a dlistint_t object
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (!head)
		return;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
