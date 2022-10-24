#include <stdlib.h>
#include "6-pop_listint.c"
#include "lists.h"
/**
 * delete_nodeint_at_index - delete an element of a listint object
 * @head: first element of a listint object
 * @index: index of the element to be deleted
 * Return: 1 on success otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *dtmp;
	unsigned int i = 0, j;

	if (index == 0)
	{
		pop_listint(head);
		return (1);
	}
	tmp = *head;
	while (tmp != NULL)
	{
		if (i == index - 1)
		{
			dtmp = tmp->next;
			tmp->next = dtmp->next;
			free(dtmp);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
