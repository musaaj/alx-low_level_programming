#include "lists.h"
/**
 * sum_listint - find the total sum of elements of a listint object
 * @head: address of the first element of a listint object
 * Return: sum of all elements of a listint
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
