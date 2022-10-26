#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new element in a given index of a listint
 * object
 * @head: address of the first element of a listint object
 * @idx: the index to put the new element
 * @n: value of the new element
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	tmp = *head;
	while (tmp != NULL)
	{
		if (i == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
