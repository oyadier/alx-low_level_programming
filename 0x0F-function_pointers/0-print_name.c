#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - print name paramenter
 * @name: the name parameter to be printed
 * @f: the name of the function pointer
 *
 * Return: nothing
 */


void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
