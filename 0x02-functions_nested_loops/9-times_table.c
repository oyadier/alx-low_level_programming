#include "main.h"
#include <stdio.h>
/**
 * times_table - print 9 times table
 * Return: void
 */
void times_table(void)
{
	int outer, inner;
	int result;

	for (outer = 0; outer <= 9; outer++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (inner = 1; inner <= 9; inner++)
		{
			result = (outer * inner);
			if ((result / 10) > 0)
			{
				_putchar((result / 10) + '0');
			}
			else
			{
			_putchar(' ');
			}
			_putchar((result % 10) + '0');

			if (inner < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
