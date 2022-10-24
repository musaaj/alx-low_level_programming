#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - free memory pointed to by a listint object
 * @head: first element of a listint object
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
