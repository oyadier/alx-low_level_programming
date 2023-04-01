#include "main.h"
/**
 * _strncpy - copy string from src to dest string pointer
 * @dest: the resulted string pointer
 * @src: the string to be copied
 * Return: string pointer (array)
 */
char *_strncpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
