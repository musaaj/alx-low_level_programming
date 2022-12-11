#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add new element at the end of a dlistint_t object
 * @head: address of pointer to the head element of a dlistint_t object
 * @n: value of the new node
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (!(*head))
	{
		*head = new_node;
		return (new_node);
	}
	while ((*head)->next)
	{
		*head = (*head)->next;
	}
	(*head)->next = new_node;
	new_node->prev = *head;
	return (new_node);
}
