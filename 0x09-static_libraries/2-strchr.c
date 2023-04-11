#include "main.h"
#include <stddef.h>
/**
 * _strchr - locate byte in a string
 * @s: the string pointer
 * @c: the byte to locate
 * Return: the location to the found byte or Null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	else

		return (NULL);
}
