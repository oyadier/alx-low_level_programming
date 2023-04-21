#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array
 * @array: the pointer to the array of integer
 * @size: the size of array
 * @action: the function pointer
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;/*return if array or function pointer is null*/

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
