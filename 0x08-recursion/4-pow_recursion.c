#include "main.h"
/**
 * _pow_recursion - compute the power of a an integer
 * @x: the base integer
 * @y: the power of an x
 * Return: the power of a computer power
 */

int _pow_recursion(int x, int y)
{
	int m = y;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		--m;
		return (x * _pow_recursion(x, m));
	}
}
