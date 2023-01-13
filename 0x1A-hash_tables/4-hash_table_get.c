#include "hash_tables.h"

/**
 * hash_table_get - get a value from a hash_table_t object
 * @ht: hash_table_t object
 * @key: char
 * Return: char on success else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node, *head;

	if (!ht || !key)
		return (NULL);
	idx = key_index((const unsigned char *) key, ht->size);
	if (!(ht->array[idx]))
		return (NULL);
	head = ht->array[idx];
	node = get_node(&head, key);
	return (node->value);

}

/**
 * get_node - get a node with a given key
 * @head: head of a hash_node_t object
 * @key: char
 * Return: hash_node_t on success else NULL
 */
hash_node_t *get_node(hash_node_t **head, const char *key)
{
	hash_node_t *tmp;

	if (!(*head) || !key)
		return (NULL);
	tmp = *head;
	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
			return (tmp);
					tmp = tmp->next;
	}
	return (NULL);
}
