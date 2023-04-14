#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: the number of array element
 * @size: the size of the array
 *
 * Return: the memory allocated to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *int_array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	int_array = malloc(nmemb * size);

	if (int_array == NULL)
	{
		return (NULL);
	}

	return (int_array);
}
