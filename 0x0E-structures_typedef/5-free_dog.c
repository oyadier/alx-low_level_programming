#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - free the dog pointer
 * @d: a pointer to dog instances
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
