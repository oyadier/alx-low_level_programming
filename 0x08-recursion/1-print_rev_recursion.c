#include "main.h"
/**
 * _print_rev_recursion - print string in reverse.
 * @s: the string parameter
 * Returns: nothing
 */

void _print_rev_recursion(char *s)
{
	int le = 0;
	int i;

	while (*(s + le) != '\0')
	{
		le++;
	}
	for (i = le; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
