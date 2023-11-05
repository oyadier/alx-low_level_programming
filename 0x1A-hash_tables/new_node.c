#include "hash_tables.h"
/**
 * create_node - create new a complete node
 * @key: the key of the node
 * @value: the value to store in the hash table
 *
 * Return: new node
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = NULL;

	node = malloc(sizeof(node));
	if (node == NULL)
	{
		return (0);
	}

	node->key = malloc(sizeof(key) + 1);
	node->value = malloc(sizeof(value) + 1);
	if (!node->key || !node->value)
		return (NULL);

	node->key = strdup(key);
	node->value = strdup(value);

	return (node);
}

