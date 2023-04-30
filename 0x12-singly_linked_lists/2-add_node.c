#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add a new node at the first
 * @head: a pointer to a pointer head
 * @str: pointer to string
 * Return: the address of the new element else NULL
 *
 * Description: add new member to the beginning of a list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;
	
	if (str == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
	}

	new->next = *head;
	*head = new;

	return (new);
}
