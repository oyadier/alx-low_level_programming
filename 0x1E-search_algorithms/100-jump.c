#include "search_algos.h"
#include <math.h>

/**
 * jump_search - locate a value using a jump algorithm
 * @array: the linear array of int values
 * @size: the size of the array
 * @value: the value to seach for
 * Return: -1 value is not present in array or if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t a = 0, tmp = 0, b = 0, i = 0;

	b = sqrt(size);
	if (array == NULL)
		return (-1);

	while (a <= size)
	{
		if (value == array[a])
		{
			if (tmp == 0)
				tmp = b;

			printf("Value found between indexes [%li] and [%li]\n", i, tmp);
			for (; i <= tmp; i++)
			{
				printf("Value checked array[%li] = [%i]\n", i, array[i]);
				if (value == array[i])
					return (a);
			}
		}
		a++;

		if (a >= b)
		{
			i = tmp;
			printf("Value checked array[%li] = [%d]\n", i, array[i]);
			b += sqrt(size);
			tmp = a;
		}
	}
	return (-1);
}
