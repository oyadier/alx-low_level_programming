#include "function_pointers.h"

/**
 * print_name - print name paramenter
 * @name: the name parameter to be printed
 * @f: the name of the function pointer
 *
 * Return: nothing
 */


void print_name(char *name, void (*f)(char))
{
	f(name);
}

/**
 * _print_name - the function that get called
 * @str: the array of string pointer
 *
 * Return: nothing
 */
void _print_name(char *str)
{
	int k = 0;

	while (*name != '\0')
	{
		k = *name++;
		_putchar(k);
	}
	_putchar('\n');
}
