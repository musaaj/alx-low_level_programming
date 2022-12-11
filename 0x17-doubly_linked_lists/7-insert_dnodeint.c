#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert a new node at a particular index
 * @h: head node of a dlistint_t object
 * @idx: index to insert the new node
 * @n: value of the new node
 * Return: dlistint_t pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp;
	int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	tmp = *head;
	if (idx == 0)
	{
		new_node->next = *head;
		if (*head)
			(*head)->prev = new_node;
		*head = new_node;
		return (node);
	}
	while (tmp->next)
	{
		if (i == idx)
		{
			new_node->prev = tmp->prev;
			new_node->next = tmp;
			(tmp->prev)->next = new_node;
			return (new_node);
		}
	}
	return (NULL);
}
