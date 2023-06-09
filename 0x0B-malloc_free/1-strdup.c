#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @str: the input string pointer parameter
 * Return: integer, string length
 */

int _strlen(char *str)
{
	int length = 0;

	while (*(str + length) != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * _strdup - nction that returns a pointer to a
 * newly allocated space in memory,
 * @str: the array of string pointer argument
 *
 * Return: returns a pointer to a newly allocated space
 */


char *_strdup(char *str)
{
	int i;
	int len = 0;
	char *dup;


	if (str == NULL)
	{
		return (NULL);
	}

	len = _strlen(str);

	dup = (char *)malloc(len + 1);

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		*(dup + i) = str[i];
	}

	dup[len] = '\0';

	return (dup);
}

