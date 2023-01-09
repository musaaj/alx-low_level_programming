#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "hetairas","supra");
    hash_table_set(ht, "mentioner", "Namse");
    hash_table_set(ht, "heliotropes","monala");
    hash_table_set(ht, "neurospora", "sundia");
    return (EXIT_SUCCESS);
}
