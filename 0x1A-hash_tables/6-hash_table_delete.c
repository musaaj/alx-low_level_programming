#include "hash_tables.h"

/**
 * hash_table_delete - release a hash_table_t
 * @ht: hash_table_t
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i, size;

	if (!ht)
		return;
	size  = ht->size;
	for (i = 0; i < size; i++)
	{
		free_node(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}

/**
 * free_node - release hash_node_t
 * @head: head of a hash_node_t
 */
void free_node(hash_node_t *head)
{
	hash_node_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}
}
