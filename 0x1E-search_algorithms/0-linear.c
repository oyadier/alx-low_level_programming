#include "search_algos.h"
/**
 * linear_search - search value in an array
 * @array: the array of int values
 * @size: the size of the array
 * @value: the value to search for
 * Return: value index or -1 if array is null or value not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
