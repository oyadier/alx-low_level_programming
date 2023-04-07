#include "main.h"
/**
 * _puts_recursion - print string to the std
 * @s: this is the string pointer parameter
 * Returns: nothing
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
