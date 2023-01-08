#include "hash_tables.h"

/**
 * hash_table_create - create a new hash_table
 * @size: size of the hash_table to create
 * Return: pointer to newly created hash_table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned int i;

	if (!size)
		return (NULL);
	hash_table = malloc(sizeof(hash_table_t *));
	if (!hash_table)
		return (NULL);
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!(hash_table->array))
		return (NULL);
	hash_table->size = size;
	for (i = 0; i <= size; i++)
		hash_table->array[i] = NULL;
	return (hash_table);
}
