#include "lists.h"
/**
 * add_dnodeint - add new node
 * @head: the head pointer of pointer to the node list
 * @n: the data to be added
 *
 * Return: the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		dprintf(2, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	*head = newNode;

	return (newNode);
}
