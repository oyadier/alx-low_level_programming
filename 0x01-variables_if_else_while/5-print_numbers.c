#include <stdio.h>
/**
 * main - contain list of single digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int _numbers = 0;

	while (_numbers < 10)
	{
		printf("%d", _numbers);
		_numbers++;
	}
	putchar(10);
	return (0);
}
