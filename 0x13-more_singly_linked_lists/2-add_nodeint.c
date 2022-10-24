#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - add an element at the beginning of a listint object
 * @head: first node of a listint object
 * @n: value of the node to be added
 * Return: address of the newly added element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *lst;

	lst = malloc(sizeof(listint_t));
	if (lst == NULL)
		return (NULL);
	lst->n = n;
	lst->next = *head;
	*head = lst;
	return (lst);
}
