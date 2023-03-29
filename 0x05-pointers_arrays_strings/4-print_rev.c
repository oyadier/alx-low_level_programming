#include "main.h"
/**
 * print_rev - print string to stdio
 * @str: the string to be printed
 * Return: nothing
 */

void print_rev(char *str)
{
	int asci = -1;
	int length = 0;
	int loop;

	while (*(str + length) != '\0')
	{

		length++;
		asci++;
	}

	for (loop = 1; loop <= length; loop++)
	{
		_putchar(*(str + asci));
		asci--;
	}
	_putchar('\n');
}
