#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - add a new node at the first position
 * @head: a pointer to a pointer head
 * @n: pointer to integer
 * Return: the address of the new element else NULL
 *
 * Description: add new member to the beginning of a list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
