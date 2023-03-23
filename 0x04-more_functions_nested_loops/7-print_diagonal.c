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

        for (count = 0; count < line; count++)
        {
                if ((line == 0) || (line < 0))
                {
                        _putchar('\n');
                }
                else
		{
			for ( space = 0; space < count; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
        }
        _putchar('\n');
}
