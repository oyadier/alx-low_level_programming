#include "main.h"
/**
 * _abs - print absolute value
 * @c: the integer to be input
 * Return: Always 0 success
 */
int _abs(int c)
{
	int v;

	if (c < 0)
	{
		v = c * -1;
		return (v);
	}
	else
	return (c);
}
