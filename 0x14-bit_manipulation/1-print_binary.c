#include "main.h"
#include <stdio.h>

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
	int leading_zero = 0;


	pos = ((unsigned long int) 1) << (bits_size - 1);
	for (i = 0; i < bits_size; ++i)
	{
		if (n & pos)
		{
			leading_zero = 1;
			printf("1");
		}
		else if (leading_zero)
			printf("0");

		pos >>= 1;
	}

	if (!leading_zero)
		printf("0");

}

