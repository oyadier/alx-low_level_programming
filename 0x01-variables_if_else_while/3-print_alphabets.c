#include <stdio.h>
/**
 * main - printing both lower and uppercase alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	int _lower = 97;
	int _upper = 65;

	while (_lower < 123)
	{
		putchar(_lower);
		_lower++;
	}
	while (_upper < 91)
	{
		putchar(_upper);
		_upper++;
	}
	putchar(10);
	return (0);
}
