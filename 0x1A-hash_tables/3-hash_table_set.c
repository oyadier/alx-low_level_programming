#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table data structure of hash_table_t
 * @key: the key string
 * @value: the value corresponding to the key
 * Return: 1 if it succeeded, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *tmp = NULL;
	unsigned long int index = 0;

	if (!ht || !ht->array || ht->size == 0
			|| !key || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup((char *)value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}

	new_node = create_node(key, value);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
