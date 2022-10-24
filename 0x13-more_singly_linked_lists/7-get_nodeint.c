#include "lists.h"
/**
 * get_nodeint_at_index - get element of a listint object by index
 * @head: first element of listint object
 * @index: index of the element to search for
 * Return: address of the element at @index position
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
