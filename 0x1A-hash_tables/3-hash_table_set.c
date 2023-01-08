#include "hash_tables.h"

/**
 * hash_table_set - insert or replace a key-value pair in hash table
 * @ht: hash_table_t
 * @key: string
 * @valu: string
 * Return: 1 on success else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_node;
	unsigned int idx;

	if(!ht || !key || !value || !strlen(key))
		return (0);
	hash_node = malloc(sizeof(hash_node_t));
	if (!hash_node)
		return (0);
	hash_node->key = strdup(key);
	hash_node->value = strdup(value);
	hash_node->next = NULL;
	idx = key_index((const unsigned char *)key, ht->size);
	if (!key)
	{
		ht->array[idx] = hash_node;
		return (1);
	}
	if (hash_node_insert(ht->array[idx], hash_node))
		return (1);
	return (0);
}

/**
 * hash_node_insert - insert new node in an index chain
 * @head: first element of a hash_node_t object
 * @hash_node: new node to be inserted
 * Return: 1 on success else 0
 */
int hash_node_insert(hash_node_t *head, hash_node_t *hash_node)
{
	if (!head)
		return (0);
	if (!hash_node)
		return (0);
	hash_node->next = head;
	head = hash_node;
	return (1);
}
