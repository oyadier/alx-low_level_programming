#include "lists.h"
/**
 * dlistint_len - function that compute the length of a linked list
 * @h: the head pointer of a linked list
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
