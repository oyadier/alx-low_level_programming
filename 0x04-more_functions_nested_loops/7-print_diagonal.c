#include "main.h"
/**
 * print_diagonal - print backslash to the std
 * @line: the number of backslah to be printed
 * Return: return nothing
 */
void print_diagonal(int line)
{
	int count;
	int space;

	if (line <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 1; count <= line; count++)
		{
			for (space = 1; space < count; space++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
