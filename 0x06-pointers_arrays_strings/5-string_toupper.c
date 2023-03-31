#include "main.h"
/**
 * string_toupper - change cases to uppper case
 * @c: the string pointer
 * Return: the uppercase string pointer
 */
char *string_toupper(char *c)
{
	int l = 0;

	while (c[l] != '\0')
	{
		if (c[l] >= 'a' && c[l] <= 'z')
		c[l] = c[l] - 32;
		l++;
	}
	return (c);
}
