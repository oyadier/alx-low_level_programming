#include "main.h"
/**
 * print_last_digit - printing the last digit of an input
 * @_num: the digit to be entered
 * Return: Alway 0 success
 */
int print_last_digit(int _num)
{
	int last = _num % 10;

	if (last < 0)
	{
		last = -last;
	}
	_putchar(last + '0');
	return (last);
}
