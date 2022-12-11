#include "lists.h"

/**
 * dlistint_len - find number of elements in a dlistint_t object
 * @h: head node of a dlistint_t object
 * Return: size_t number of elements in a dlistint_t object
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;
	const dlistint_t *tmp;

	len = 0;
	if (!h)
		return (0);
	tmp = h;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	return (len);

}
