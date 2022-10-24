#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - removes and return the last element of a listint object
 * @head: first element of a listint object
 * Return: int value of the first element of @head
 */
int pop_listint(listint_t **head)
{
	int el;
	listint_t *tmp;

	if (*head == NULL)
		return (0);
	el = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (el);
}
