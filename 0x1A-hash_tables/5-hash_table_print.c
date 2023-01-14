#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size, i;
	char *tmp, *dtmp;

	if (!ht)
		return;
	size = ht->size;
	printf("{");
	for (i = 0; i < size; i++)
	{
		tmp = node_list_to_string(ht, i);
		
		dtmp = node_list_to_string(ht, i + 1);
		if (strlen(dtmp)  && strlen(tmp))
		{
			printf("%s", tmp);
			printf(", ");
		}else
			printf("%s", tmp);
		free(tmp);
		free(dtmp);
	}
	printf("}\n");
}

char *node_list_to_string(const hash_table_t *ht, unsigned long int idx)
{
	hash_node_t *h;
	char *tmp;

	tmp = malloc(sizeof(char) * 2048);
	if (!tmp)
		return ("");
	tmp[0] = '\0';
	h = ht->array[idx];
	while (h)
	{
		strcat(tmp, "'");
		strcat(tmp, h->key);
		strcat(tmp, "'");
		strcat(tmp, ": ");
		strcat(tmp, "'");
		strcat(tmp, h->value);
		strcat(tmp, "'");
		if (h->next != NULL)
			strcat(tmp, ", ");
		h = h->next;
	}
	return (tmp);
}

