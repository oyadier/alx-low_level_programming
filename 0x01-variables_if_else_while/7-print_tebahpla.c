#include <stdio.h>
/**
 * main - printing of lowercase alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int _al_reverse = 122;

	while (_al_reverse > 96)
	{
		putchar(_al_reverse);
		_al_reverse--;
	}
	putchar(10);
	return (0);
}
