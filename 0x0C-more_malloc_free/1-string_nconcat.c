#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string pointers to be returned
 * @s2: the new array of string pointer
 * @n: the nth bytes of the s2
 * Return: string pointers of concatenaed string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, s1_len, s2_len, i;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
	{
	}
	for (s2_len = 0; s2[s2_len] != '\0' && s2_len < n; s2_len++)
	{
	}
	concat = malloc(sizeof(char) * (s1_len + s2_len + 1));

	if (concat == NULL)
	{
		return (NULL);
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
