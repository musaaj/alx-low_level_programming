#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - free memory pointed to by a listint object
 * @head: a listint object
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
