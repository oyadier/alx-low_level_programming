#include "main.h"
/**
 * 1-alphabet.c - print alpharbet in lowercase
 * 
 * Return: always zero (success)
 */

void print_alphabet(void)
	{
		char _alpha;

		for (_alpha = 'a'; _alpha <= 'z'; _alpha++)
		{
			_putchar(_alpha);
		}
		_putchar('\n');
	}
