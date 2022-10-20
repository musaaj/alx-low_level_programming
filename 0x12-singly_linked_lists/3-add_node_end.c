#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include "strlen.c"
/**
 * add_node_end - add a node at the end of a list_t object
 * @head: pointer to a list_t object
 * @str: const char array
 * Return: address to the new inserted node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *tmp = NULL;

	if (str == NULL)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = node;
	return (node);
}
