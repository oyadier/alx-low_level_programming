#include "main.h"

/**
 * rev_string - print the nth elements in array
 * @s: array pointer variable
 * Return: 0 success
 */

void rev_string(char *str)
{	
	int asci = -1;
	int length = 0;
	int loop;

	while (*(str + length) != '\0')
	{

		length++;
		asci++;
	}

	for (loop = 1; loop <= length; loop++)
	{
		_putchar(*(str + asci));
		asci--;
	}
	_putchar('\n');

}
