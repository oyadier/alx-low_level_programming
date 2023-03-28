#include "main.h"
/**
 * _strlen - returns the length of a string
 * @strg: the string parameter
 * Return: length of a string
 */

int _strlen(char *strg)
{
	int length = 0;

	while (*strg != '\0')
	{
		strg++;
		length++;
	}
	return (length);
}
