#include "main.h"
/**
 * _memset - fills the first n bytes of memory area with a
 * constant character (byte)
 * @s: the string pointer
 * @b: the constant character (byte)
 * @n: the nth number of times
 * Return: character pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p++ = b;
		n--;
	}
	return (s);
}
