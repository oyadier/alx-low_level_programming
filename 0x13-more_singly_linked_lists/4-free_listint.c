#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free up the space used by the listint
 * @head: a pointer to the listint node
 * Return: nothing
 *
 *Description: This function free up the space used by the
 *		listint node
 */

void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
