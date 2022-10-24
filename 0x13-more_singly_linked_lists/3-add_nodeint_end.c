#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - add an element to the end of a listint object
 * @head: first element of a listint object
 * @n: value for the new element to be added
 * Return: address of the newly added element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lst, *tmp;

	lst = malloc(sizeof(listint_t));
	if (lst == NULL)
		return (NULL);
	lst->n = n;
	lst->next = NULL;
	if (*head == NULL)
	{
		*head = lst;
		return (lst);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = lst;
	return (lst);
}
