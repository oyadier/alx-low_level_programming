#include <stdio.h>
/**
 * main - printing of hexadecimal numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int _digit = 48;
	int new_line ; 32;

	while (_digit < 58)
	{
		if (_digit == 57)
		{
			putchar(_digit);
			new_line =10;
		}
		else
		{
			putchar(_diigit);
			putchar(44);	
		}
		putchar(new_line);
		_digit++;
	}
	return (0);
}
