#include <stdio.h>
/**
 * main - printing of lowercase alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n < 123)
	{
		putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}
