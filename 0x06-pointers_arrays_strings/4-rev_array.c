#include "main.h"
/**
 * reverse_array - reverses the element of an array
 * @element: the pointer of integer array
 * @n: length of array
 */
void reverse_array(int *element, int n)
{
	int loop;
	int tmp;

	for (loop = 0; loop < n--; ++loop)
	{
		tmp = element[loop];
		element[loop] = element[n];
		element[n] = tmp;
	}
}
