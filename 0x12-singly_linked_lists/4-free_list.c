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
	list_t *_current = head;

	while (_current != NULL)
	{
		temp = _current;
		_current = _current->next;

		free(temp->str);
		free(temp);
	}
}
