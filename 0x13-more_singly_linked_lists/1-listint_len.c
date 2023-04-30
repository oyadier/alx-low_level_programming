#include "lists.h"
#include <stddef.h>

/**
 * listint_len - compute the length of list
 * @h: the pointer to a member in single linked list
 *
 * Return: the number of members in a list
 */

size_t listint_len(const listint_t *h)
{
	return (length(h));
}
