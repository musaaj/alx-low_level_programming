#include "hash_tables.h"
#include "strdup.c"
#include <stdio.h>
#include <string.h>

/**
 * hash_table_set - insert or replace a key-value pair in hash table
 * @ht: hash_table_t
 * @key: string
 * @value: string
 * Return: 1 on success else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_node;
	unsigned int idx;

	if (!ht || !key || !value || !strlen(key))
		return (0);
	hash_node = malloc(sizeof(hash_node_t));
	if (!hash_node)
		return (0);
	hash_node->key = _strdup(key);
	if (!(hash_node->key))
		return (0);
	hash_node->value = _strdup(value);
	if (!(hash_node->key))
		return (0);
	hash_node->next = NULL;
	idx = key_index((const unsigned char *)key, ht->size);
	if (!(ht->array[idx]))
	{
		ht->array[idx] = hash_node;
		return (1);
	}
	if (strcmp(key, ht->array[idx]->key) == 0)
	{
		ht->array[idx] = hash_node;
		return (1);
	}
	if (hash_node_insert(&(ht->array[idx]), hash_node))
		return (1);
	return (0);
}

/**
 * hash_node_insert - insert new node in an index chain
 * @head: first element of a hash_node_t object
 * @hash_node: new node to be inserted
 * Return: 1 on success else 0
 */
int hash_node_insert(hash_node_t **head, hash_node_t *hash_node)
{
	if (!head)
		return (0);
	if (!hash_node)
		return (0);
	hash_node->next = *head;
	*head = hash_node;
	return (1);
}
