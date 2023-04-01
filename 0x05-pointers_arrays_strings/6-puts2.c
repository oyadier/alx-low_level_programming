#include "main.h"
/**
 * puts2 - print any other character start with first one
 * @str: the array of characters
 * Return: nothing
 */
void puts2(char *str)
{

	int length = 0;
	int loop;


	while (*(str + length) != '\0')
	{
		length++;
	}

i
	for (loop = 0; loop <= length; loop++)
	{
		if (loop % 2 == 0)
		{
			_putchar(str[loop]);
		}

	}
}
