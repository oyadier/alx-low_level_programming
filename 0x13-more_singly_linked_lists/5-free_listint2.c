#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free up the space used by the listint
 * @head: a pointer to the listint node
 * Return: nothing
 *
 *Description: This function free up the space used by the
 *		listint node
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *current;

	while (temp != NULL)
	{

		current = temp->next;
		free(temp);
		temp = current;

	}
	*head = NULL;

}
