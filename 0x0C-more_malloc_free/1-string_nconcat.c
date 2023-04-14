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
 * string_nconcat - function that concatenates two strings.
 * @s1: string pointers to be returned
 * @s2: the new array of string pointer
 * @n: the nth bytes of the s2
 * Return: string pointers of concatenaed string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1_len, len;
	unsigned int s2_len, i;
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

	concat = malloc((s1_len + s2_len + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}
	if (n >= s2_len)
	{
		n = s2_len;
	}

	for (len = 0; len < s1_len; len++)
	{
		*(concat + len) = *(s1 + len);/*copy first string a string pointer*/
	}
	for (i = 0; i < n; i++)
	{
		concat[len++] = s2[i]; /*add the second string the first*/
	}

	concat[len] = '\0';
	return (concat);
}
