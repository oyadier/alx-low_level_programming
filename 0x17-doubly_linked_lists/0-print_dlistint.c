#include "lists.h"

/**
 * print_dlistint - print all elements of a dlistint
 * @h: the node head pointer
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}

	return (node);
}

