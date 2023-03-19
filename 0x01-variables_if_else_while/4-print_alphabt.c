#include <stdio.h>
/**
 * main - this return alphabet in lowercase execpt q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	int _lower = 97;

	while (_lower < 123)
	{
		if ((_lower == 101) || (_lower == 113))
		{
			_lower++;
		}
		else
		{
			putchar(_lower);
			_lower++;
		}
	}
	putchar(10);
	return (0);
}
