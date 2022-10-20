#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include "strlen.c"
/**
 * add_node - insert node at the beginning of a list_t object
 * @head: pointer to a list_t objects
 * @str: char array
 * Return: address to the new inserted element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	if (str == NULL)
		return (NULL);
	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
		return (NULL);
	new_head->str = strdup(str);
	new_head->len = _strlen(str);
	if (*head == NULL)
	{
		*head = new_head;
	}
	else
	{
		new_head->next = *head;
		*head = new_head;
	}
	return (new_head);
}
