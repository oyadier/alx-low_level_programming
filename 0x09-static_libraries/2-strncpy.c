#include "main.h"
/**
 * _strncpy - copy string from src to dest string pointer
 * @dest: the resulted string pointer
 * @src: the string to be copied
 * @n: the n byte
 * Return: characters
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;


	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
