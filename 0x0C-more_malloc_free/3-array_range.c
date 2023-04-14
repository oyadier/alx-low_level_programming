#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: minimum range
 * @max: maximum range
 *
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *arr_int;

	if (min > max)
	{
		return (NULL);
	}

	arr_int = malloc((max - min + 1) * sizeof(int));

	if (arr_int == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		arr_int[i] = min;
		min++;
	}

	return (arr_int);
}
