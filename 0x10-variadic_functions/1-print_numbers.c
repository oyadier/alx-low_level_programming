#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - print all the number in the arguments
 * @separator: the character that separate the numbers
 * @n: the number of arguments in the valist
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int mem;

	va_list _elem;

	va_start(_elem, n);

	for (i = 0; i < n; i++)
	{
		mem = va_arg(_elem, int);
		if (separator == NULL)
		{
			printf("%d ", mem);
		}
		else
		printf("%d%c ", mem, separator);
	}
	va_end(_elem);

	printf("\n");
}

