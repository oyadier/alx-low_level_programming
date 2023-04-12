#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of characters
 * @size: the sign of that array
 * @c: the character to be printed
 *
 * Return: an array of string pointer;
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;


	if (size == 0)
	{
		return (NULL);
	}

	buffer = malloc(size * sizeof(char));

	if (buffer)
	{
		for (i = 0; i < size; i++)
		{
			*(buffer + i) = c;
		}
		return (buffer);
	}
	else
	{
		return (NULL);

	}
}
