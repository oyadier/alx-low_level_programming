#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - print the elements of a singly linked list
 * @h: the pointer to list member
 * Return: the size type
 *
 * Description: It print all the names of the
 *		members in a singly linked list
 */
size_t print_list(const list_t *h)
{
	unsigned int len = 0;

	while (h != NULL)
	{
		len++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (len);
}
