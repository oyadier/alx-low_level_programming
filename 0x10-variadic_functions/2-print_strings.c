#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - print all the number in the arguments
 * @separator: the character that separate the numbers
 * @n: the number of arguments in the valist
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *mem;
	va_list _elem;

	va_start(_elem, n);

	for (i = 0; i < n; i++)
	{
		mem = va_arg(_elem, char*);

		if (mem == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", mem);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}

	}
	va_end(_elem);

	printf("\n");
}

