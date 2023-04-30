#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - print the elements of a singly linked list
 * @h: the pointer to list member
 * Return: the size type
 *
 * Description: It print all the names of the
 *		members in a singly linked list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int len = 0;

	while (h != NULL)
	{
		len++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (len);
}
