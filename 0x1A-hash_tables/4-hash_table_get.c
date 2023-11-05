#include "hash_tables.h"

/**
 * hash_table_get - get a node from the hash_table(array)\
 *			based on the hash key
 * @ht: the hash table
 * @key: the string key of the node
 *
 * Return: the node valude based on the hash code
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *node_value;
	hash_node_t *get_node;
	unsigned long int hash_code;


	if (!ht || !(ht->array) || ht->size == 0)
		return (NULL);

	hash_code = key_index((unsigned char *)key, ht->size);
	get_node = ht->array[hash_code];
	if (hash_code > ht->size || get_node == NULL)
		return (NULL);
	node_value  = get_node->value;

	return (node_value);
}
