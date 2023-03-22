#include "main.h"
/**
 * print_alphabet_x10 - printing alphabet 10 x
 *
 * Return: always 0 success
 */
void print_alphabet_x10(void)
{
	int _outer;
	char _alpha;

	for (_outer = 0; _outer < 10; _outer++)
	{
		for (_alpha = 'a'; _alpha <= 'z'; _alpha++)
		{
			_putchar(_alpha);
		}
	}
	_putchar('\n');
}
