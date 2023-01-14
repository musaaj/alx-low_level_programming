#include "hash_tables.h"

/**
 * hash_table_print - print elements of a hash_table_t object
 * @ht: hash_table_t object
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size, i;
	char *tmp, *dtmp;
	size_t count;

	if (!ht)
		return;
	dtmp = malloc(sizeof(char) * 2048);
	if (!dtmp)
		return;
	size = ht->size;
	dtmp[0] = '\0';
	for (i = 0; i < size; i++)
	{
		tmp = node_list_to_string(ht, i);
		if (tmp)
		{
			strcat(dtmp, tmp);
			strcat(dtmp, "^");
			free(tmp);
		}
	}
	count = char_count(dtmp, '^');

	printf("{");
	tmp = strtok(dtmp, "^");
	count--;
	while (tmp)
	{
		printf("%s", tmp);
		if (count)
			printf(", ");
		count--;
		tmp = strtok(NULL, "^");
	}
	printf("}\n");
	free(dtmp);

}

/**
 * node_list_to_string - convert a hash_node_t object to string
 * @ht: hash_table_t object
 * @idx: index of a hash_node_t object to convert
 * Return: string on success else null
 */
char *node_list_to_string(const hash_table_t *ht, unsigned long int idx)
{
	hash_node_t *h;
	char *tmp;

	h = ht->array[idx];
	if (!h)
		return (NULL);
	tmp = malloc(sizeof(char) * 2048);
	if (!tmp)
		return (NULL);
	tmp[0] = '\0';
	while (h)
	{
		strcat(tmp, "'");
		strcat(tmp, h->key);
		strcat(tmp, "'");
		strcat(tmp, ": ");
		strcat(tmp, "'");
		strcat(tmp, h->value);
		strcat(tmp, "'");
		if (h->next)
			strcat(tmp, "^");
		h = h->next;
	}
	return (tmp);
}

/**
 * char_count - count occurence of a char in string
 * @s: string
 * @c: char
 * Return: size_t
 */
size_t char_count(char *s, char c)
{
	size_t i, count;

	if (!s)
		return (0);
	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			count++;
	}
	return (count);
}

