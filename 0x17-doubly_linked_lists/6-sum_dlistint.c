#include "lists.h"
/**
 * sum_dlistint - add the data of the nodes
 * @head: the pointer to the list of nodes
 *
 * Return: sum of the node data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum   += head->n;
		head = head->next;
	}

	return (sum);
}


