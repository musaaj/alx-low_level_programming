#include "hash_tables.h"

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

}

char *node_list_to_string(const hash_table_t *ht, unsigned long int idx)
{
	hash_node_t *h;
	char *tmp;

	tmp = malloc(sizeof(char) * 2048);
	if (!tmp)
		return (NULL);
	tmp[0] = '\0';
	h = ht->array[idx];
	if (!h)
		return (NULL);
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

