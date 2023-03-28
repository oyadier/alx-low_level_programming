#include "main.h"
/**
 * _puts - print string to stdio
 * @str: the string to be printed
 * Return: nothing
 */

void _puts(char *str)
{
	int asci = 0;

	while (*str != '\0')
	{
		asci = *str++;
		_putchar(asci);
	}
	_putchar('\n');
}
