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
	int k;

	for (count = 0; count <= 10; count++)
	{
		_s_digit = _increment;
		for (inner = 0; inner < size; inner++)
		{
			putchar(_f_digit);
			if (_f_digit == 56)
			{
				for (k = 0; k <= 1; k++)
				{
				putchar(_s_digit);
				_s_digit -= 25;
				}
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

	return (0);
}
