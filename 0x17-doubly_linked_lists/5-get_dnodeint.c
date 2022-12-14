#include "lists.h"

/**
 * get_dnodeint_at_index - get element of a dlistint_t object by index
 * @head: head node of the dlistint_t object
 * @index: index of the node to be gotten
 * Return: not at @index if it exist else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	if (!head)
		return (NULL);
	tmp = head;
	i = 0;
	while (tmp)
	{
		if (i == index)
			return (tmp);
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
