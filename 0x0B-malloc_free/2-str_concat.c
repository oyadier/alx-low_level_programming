#include <stdlib.h>
#include "main.h"

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
 * str_concat - function that concatenates two strings.
 * @s1: string pointers to be returned
 * @s2: the new array of string pointer
 * Return: string pointers of concatenaed string
 */

char *str_concat(char *s1, char *s2)
{
	int t_len, s1_len, s2_len, len = 0, i = 0;
	char *concat;


	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	t_len = s1_len + s2_len;

	concat = (char *)malloc((t_len + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}
	while (len < s1_len)
	{
		*(concat + len) = *(s1 + len);
		len++;
	}

	while (i < s2_len)
	{
		concat[len] = s2[i];
		i++;
		len++;
	}

	concat[len] = '\0';

	return (concat);
}
