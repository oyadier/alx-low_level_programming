#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - this initialize the dog structure
 * @d: the pointer to the instance
 * @name: the name parameter
 * @age: the age of the dog
 * @owner: the owner
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(d));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
