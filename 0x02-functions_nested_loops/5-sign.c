#include "main.h"
/**
 * print_sign - this print number is input is greater or less than zero
 * @n: the argument
 * Return: Always 0 success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	else
	{
		_putchar('0');
	}
	return (n);
}
