#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - convert a binary number to an integer unsigned
 * @str: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *str)
{
	unsigned int total, exp;
	int len;

	if (str == NULL)
		return (0);

	for (len = 0; str[len]; len++)
	{
		if (str[len] != '0' && str[len] != '1')
			return (0);
	}

	for (exp = 1, total = 0, len--; len >= 0; len--, exp *= 2)
	{
		if (str[len] == '1')
			total += exp;
	}

	return (total);
}
