#include "main.h"
/**
 * factorial - compute the factorial of a give integer
 * @n: the factorial number
 * Return: the computed factorial of a number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
