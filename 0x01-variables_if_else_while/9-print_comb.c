#include <stdio.h>
/**
 * main - printing of hexadecimal numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int _digit = 48;

	while (_digit < 58)
	{
		if (_digit == 57)
		{
			putchar(_digit);
			_digit++;
		}
		else
		{
			putchar(_digit);
			putchar(44);
			_digit++;
		}
			putchar(32);
	}
	putchar(10);
	return (0);
}
