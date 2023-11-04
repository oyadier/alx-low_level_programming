#include "hash_tables.h"

/**
 * key_index - compute the index of the array(hash_table)\
 *		@key and @size (array size)
 * @key: the string key to be used for hash_value
 * @size: the size of the array or associative array
 *
 * Return: the array index to store the node value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, key_index;

	hash_value = hash_djb2(key);
	key_index = hash_value % size;

	return (key_index);
}
