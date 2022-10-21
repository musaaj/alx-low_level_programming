#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free memory pointed by a list_t object
 * @head: list_t
 */
void free_list(list_t *head)
{
	list_t *tmp;
	

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}

