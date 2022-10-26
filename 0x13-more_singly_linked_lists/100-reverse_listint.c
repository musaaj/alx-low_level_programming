#include "lists.h"
/**
 * reverse_listint - revserse order of elements of a lsitint object
 * @head: first element of a listint object
 * Return: address of the first element of the listint object reversed
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *current, *prev;

	next = NULL;
	current = *head;
	prev = NULL;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
