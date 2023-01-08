#include "hash_tables.h"

/**
 * key_index - find the index of a key in a hash table of given size
 * @key: string
 * @size: unsigned long int
 * Return: unsigned long int index for @key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key)
		return (0);
	if (!size)
		return (0);
	return ((hash_djb2(key) ^ size) % size);
}
