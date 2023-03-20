#include <stdio.h>
/**
 * main - printing of hexadecimal numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int _digit = 122;

	while (_digit > 98)
	{
		putchar(_digit);
		_digit--;
	}
	putchar(10);
	return (0);
}
