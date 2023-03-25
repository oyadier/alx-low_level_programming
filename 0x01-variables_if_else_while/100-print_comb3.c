#include "stdio.h"
/**
 * main - this print the numbers up to 89
 * Return: Always 0 (success)
 */
int main(void)
{
	int _f_digit = 48;
	int _s_digit = 48;
	int count;
	int inner;
	int size = 9;
	int _increment = 49;

	for (count = 0; count <= 10; count++)
	{
		_s_digit = _increment;
		for (inner = 0; inner < size; inner++)
		{
			putchar(_f_digit);
			if (_f_digit == 56)
			{
				putchar(_s_digit);
			}
			else
			{
				putchar(_s_digit);
				putchar(',');
				putchar(' ');
			}
			_s_digit++;
		}
		_increment++;
		_f_digit++;
		size--;
	}
	putchar('\n');
	return (0);
}
