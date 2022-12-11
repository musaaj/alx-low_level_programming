#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add a new node at the beginning of a
* dlistint_t object
* @head: address of address of first element in a
* dlistint_t object
* @n: value of the node to be added
* Return: dlistint_t newly added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
		return (NULL);
	if (!(*head))
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
