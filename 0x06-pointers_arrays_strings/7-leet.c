#include "main.h"
/**
 * leet - encodes a string into integer
 * @c: the string pointer
 * Return: the c value
 */
char *leet(char *c)
{
	int x;
	int k;
	char a2[] = "4433007711";
	char a1[] = "aAeEoOtTlL";

	for (x = 0; c[x] != '\0'; x++)
	{
		for (k = 0; k < 10; k++)
		{
			if (c[x] == a1[k])
			{
				c[x] = a2[k];
			}
		}
	}
	return (c);
}
