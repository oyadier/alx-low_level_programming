#include "hash_tables.h"

/**
 * hash_table_print - print the the hash table
 * @ht: hash table/associative array
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	int i;
	int size;
	char *key, *value;
	hash_node_t *node;

	size = ht->size;
	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			key = node->key;
			value = node->value;
			printf("'%s': '%s'", key, value);
			if (i == size - 1)
			{
				printf(",");
			}
			else
				printf(", ");
			node = node->next;
		}
	}
	printf("}\n");
}
