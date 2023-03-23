#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 * Return: always 0 (success);
 */
void print_numbers(void)
{
	char chara;

	for (chara = '0'; chara <= '9'; chara++)
	{
		_putchar(chara);
	}
	_putchar('\n');
}
