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
	int _elem_count = 0;
	char c;
	int i;
	float f;
	char *s;

	va_start(_elem, format);
	while (format && format[_elem_count])
	{
		c = format[_elem_count];
		switch (c)
		{
			case 'c':
				i = va_arg(_elem, int);
				printf("%c", i);
				break;
			case 'f':
				f = va_arg(_elem, double);
				printf("%f", f);
				break;
			case 'i':
				i = va_arg(_elem, int);
				printf("%d", i);
				break;
			case 's':
				s = va_arg(_elem, char*);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
				break;
			default:
				break;
		}
		if (format[_elem_count + 1])
		{
			printf(", ");
		}
		_elem_count++;
	}
	va_end(_elem);
	printf("\n");
}
