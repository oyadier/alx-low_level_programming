#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free up the single linked list
 * @head: the head of the list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = head->next;

		free(temp->str);
		free(temp);
	}
}
