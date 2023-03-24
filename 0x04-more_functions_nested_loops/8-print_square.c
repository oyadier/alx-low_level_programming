#include "main.h"
 /**
 *print_square - print symbols in a square form
 *@size: the size of the square
 *Return: void
 */
void print_square(int size)
{
	int outer;
	int inner;

	for (outer = 0; outer < size; outer++)
	{
		for (inner = 0; inner < size; inner++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
