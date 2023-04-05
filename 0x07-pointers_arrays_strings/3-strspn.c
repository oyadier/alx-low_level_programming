#include "main.h"
/**
 * _strspn - returns the number of byte in an initial segment
 * @s: the initial segment of string pointer
 * @accept: the string to be compared
 * Return: an integer of number of byte in an initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				break;
			}
		}
		if (!accept[b])
		{
			return (i);
		}
	}
	return (i);
}
