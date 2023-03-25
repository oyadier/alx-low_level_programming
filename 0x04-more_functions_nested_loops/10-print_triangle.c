#include "main.h"
/**
 * print_triangle - print triagle to the screen
 * @size: the lenght and hight of the triangle
 * Return: nothing is return
 */
void print_triangle(int size)
{
	int outer, inner;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (outer = 1; outer <= size; outer++)
		{
			for (inner = size; inner >= 1; inner--)
			{
				if (inner <= outer)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
