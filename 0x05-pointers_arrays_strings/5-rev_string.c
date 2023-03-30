#include "main.h"

/**
 * rev_string - print the nth elements in array
 * @str: array pointer variable
 * Return: 0 success
 */

void rev_string(char *str)
{
	int asci = -1;
	int length = 0;
	int loop;
	int i;
	int temp[1000];

	while (*(str + length) != '\0')
	{

		length++;
		asci++;
	}


	for (loop = 1; loop <= length; loop++)
	{
		temp[loop - 1] = *(str + asci);
		asci--;
	}

	for (i = 0; i < length; i++)
	{
		str[i] = temp[i];
	}

}
