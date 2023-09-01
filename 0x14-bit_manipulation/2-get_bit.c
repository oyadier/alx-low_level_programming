#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the integer number
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int bits_size = sizeof(unsigned long int) * 8;
	unsigned long int pos;
	unsigned long int i;
	int l_zero = 0;


	pos = 1  << (bits_size - 1);
	for (i = 0; i < bits_size; ++i)
	{
		if (n & pos)
		{
			l_zero = 1;
			printf("1");
		}
		else if (l_zero)
			printf("0");

		pos >>= 1;
	}

	if (!l_zero)
		printf("0");

}
