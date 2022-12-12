#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete an element of a dlistint_t object
 * @head: pointer to the first node of a dlistint_t object
 * @index: index of the element to be removed
 * Return: 1 on success else 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	int i = 0;
	dlistint_t *tmp, *dtmp;

	if (index == 0)
	{
		if (*head)
		{
			tmp = *head;
			*head = tmp->next;
			if (*head)
				(*head)->prev = NULL;
			free(tmp);
			return (1);
		}
	}
	dtmp = *head;
	while (dtmp)
	{
		if (i == index)
		{
			tmp = *dtmp;
			dtmp->next = tmp->next;
			if(tmp->next)
				(tmp->next)->prev = dtmp;
			free(tmp);
			return (1)
		}
		i++;
		dtmp = dtmp->next;
	}
	return (0);
}
