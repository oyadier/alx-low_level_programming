#include "main.h"
/**
 * more_numbers - print number range 0-14 ten times
 * Return: Always 0 Success
 */
void more_numbers(void)
{
	int times;
	int count;

	for (times = 0; times <= 10; times++)
	{
		for (count = 0; count <= 14; count++)
		{
			if (count > 9)
			{
				_putchar((count / 10) + '0');
			}
			_putchar((count / 10) + '0');
		}
		_putchar('\n');
	}
}
