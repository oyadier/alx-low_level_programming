#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - Create dog instance
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: array of string pointer to the owner of the dog
 *
 * Returns: NULL is creating the new dog fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *_new_dog;

	_new_dog = malloc(sizeof(_new_dog));

	if (_new_dog == NULL)
		return (NULL);

	_new_dog->name = name;
	_new_dog->age = age;
	_new_dog->owner = owner;

	return (_new_dog);
}
