#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - returns the index of found integer in an array
 * @array: the pointer to array of integers
 * @size: the size of the array
 * @cmp: the function pointer
 * Return: 0 if @size is <= 0 and  -1 if > size
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)

		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);

	}
	return (0);
}
