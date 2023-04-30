#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * lenght - calculate the lenght of a string
 * @str: the pointer to string array
 *
 * Return: the lenght of the string
 */

unsigned int lenght(const char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * add_node_end - add a new node at the end of the list
 * @head: a pointer to a pointer head
 * @str: pointer to string
 * Return: the address of the new element else NULL
 *
 * Description: add new member to the beginning of a list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;
	list_t *temp = NULL;


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
	new->len = lenght(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (new);
}
