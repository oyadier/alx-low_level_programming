#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  function that allocates memory using malloc
 * @b: the size of memory to be allocated
 *
 * Return: the pointer to the memory allocated
 */

void *malloc_checked(unsigned int b)
{
	int fail = 98;
	unsigned int *mem;


	mem = malloc(sizeof(b));

	if (mem == NULL)
	{
		exit(fail);
	}

	return (mem);
}
