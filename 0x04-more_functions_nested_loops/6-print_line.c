#include "main.h"
/**
 * print_line - print line to the std
 * @line: the number of lines to be printed
 * Return: return nothing
 */
void print_line(int line)
{
	int count;

	for (count = 0; count < line; count++)
	{
		if ((line == 0) || (line < 0))
		{
			_putchar('\n');
		}
		else
		_putchar('_');
	}
	_putchar('\n');
}
