#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print from nth to 98
 * @_start_int: the starting integer
 * Return: print from nth to 98
 */
void print_to_98(int _start_int)
{
	if (_start_int > 99)
	{
		while (_start_int > 99)
		{
			if (_start_int == 98)
			{
				printf("%d", _start_int);
			}
			else
			{
			printf("%d, ", _start_int);
			_start_int--;
			}
		}
	}
	else
	{
		while (_start_int < 99)
		{
			if (_start_int == 98)
			{
				printf("%d", _start_int);
			}
			else
			{
			printf("%d, ", _start_int);
			_start_int++;
			}
		}
	}
	_putchar('\n');
}
