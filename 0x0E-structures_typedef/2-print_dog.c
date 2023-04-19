#include "dog.h"

/**
 * print_dog - Prints the attributes of a struct dog variable
 * @d: Pointer to the struct dog variable to print
 *
 * Returns null if d is null
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->owner == NULL)
	{

		d->owner = "(nil)";
	}
	if (d->name == NULL)
	{

		d->name = "(nil)";
	}

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
