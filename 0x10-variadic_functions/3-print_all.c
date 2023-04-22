#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - print all symbols, char, int,string etc to the stdio
 * @format: the number of elements to be printed
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list _elem;
	int _elem_count = 0, pos = 0;
	char *sep = ", ";
	char *s;

	va_start(_elem, format);
	while (format && format[pos])
		pos++;

	while (format && format[_elem_count])
	{
		if (_elem_count == (pos - 1))
		{
			sep = "";
		}
		switch (format[_elem_count])
		{
			case 'c':
				printf("%c%s",  va_arg(_elem, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(_elem, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(_elem, double), sep);
				break;
			case 's':
				s = va_arg(_elem, char *);
				if (!s)
					s = "(nil)";
				printf("%s%s", s, sep);
				break;
		}
		_elem_count++;
	}
	va_end(_elem);
	printf("\n");
}
