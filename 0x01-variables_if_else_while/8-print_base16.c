#include <stdio.h>
/**
 * main - printing of hexadecimal numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int _digit = 48;
	int _hex = 97;

	while (_digit < 58)
	{
		putchar(_digit);
		_digit++;
	}
	while (_hex < 103)
	{
		putchar(_hex);
		_hex++;
	}
	putchar(10);
	return (0);
}
