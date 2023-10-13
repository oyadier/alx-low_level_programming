#include "lists.h"
/**
 * add_dnodeint_end - Add node at the end of a list
 * @head: the head pointer of pointer to the node list
 * @n: the data to be added
 *
 * Return: the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *last;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		/* Case where list is empty*/
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	last = *head;
	while (last->next != NULL)
		last  = last->next;
	last->next = newNode;
	newNode->prev = last;
	return (newNode);
}
