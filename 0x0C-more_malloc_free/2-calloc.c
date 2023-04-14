#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmem: the number of array element
 * @size: the size of the array
 *
 * Return: the memory allocated to array
 */

void *_calloc(unsigned int nmem, unsigned int size)
{
	unsigned int i;
	char *int_array = "0";

	if (nmem == 0 || size == 0)
		return (NULL);

	int_array = malloc(nmem * size);

	if (int_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmem * size); i++)
		int_array[i] = 0;

	return (int_array);
}
