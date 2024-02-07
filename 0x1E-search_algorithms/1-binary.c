#include "search_algos.h"
/**
 * binary_search - search value in an array
 * @array: the array of int values
 * @size: the size of the array
 * @value: the value to search for
 * Return: value index or -1 if array is null or value not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, mid, i;
	size_t right = size - 1;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		/*Printing each sub array before locating the value*/
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
			printf(", ");
		}
		printf("\n");
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
