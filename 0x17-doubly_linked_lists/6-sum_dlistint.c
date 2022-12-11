#include "lists.h"

/**
 * sum_dlistint - sum values of nodes of a dlistint_t object
 * @head: head node of dlistint_t object
 * Return: int sum of values of nodes of a dlistint_t object
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp;

	if (!head)
		return (0);
	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
