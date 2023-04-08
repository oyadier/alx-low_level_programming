#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the integer parameter
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
	{
		return (n);
	}

	return (_comp_sqrt(n, 0));
}


/**
 * _comp_sqrt - computre and return square root of a number
 * @x: a checker
 * @n: square number
 * Return: the square root of n
 */

int _comp_sqrt(int x, int n)
{
	if (n * n == x)
	{
		return (n);
	}
	else if (n > x / 2)
	{
		return (-1);
	}
	return (_comp_sqrt(x, n + 1));
}
