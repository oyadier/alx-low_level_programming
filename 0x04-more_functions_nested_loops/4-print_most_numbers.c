#include "main.h"
/**
 * print_most_numbers - print integers except 2 and 4
 * Return: Always 0 Success
 */
void print_most_numbers(void)
{
	char _num;

	for (_num = '0'; _num <= '9'; _num++)
	{
		if ((_num == '2') || (_num == '4'))
		{
		}
		else
			_putchar(_num);
	}
	_putchar('\n');
}
