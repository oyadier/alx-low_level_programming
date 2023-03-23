#include "main.h"
/**
 * more_numbers - print number range 0-14 ten times
 * Return: Always 0 Success
 */
void more_numbers(void)
{
	int times;
	int count = 0;

	while (count < 10)
	{
		for (times = 0; times < 14; times++)
		{
			_putchar(times + '0');
		}
		count++;
		_putchar('\n');
	}
}
