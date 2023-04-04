#include "main.h"
/**
 * _memcpy - copy n byte from memory to another memory
 * @dest: new memory location
 * @src: the existing memory location
 * @n: number of bytes (characters)
 * Return: the new memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_p = dest;
	char *src_p = src;
	int i = 0;

	while (n > 0 && src_p[n] != '\0')
	{
		dest_p[i] = src_p[i];
		i++;
		n--;
	}

	return (dest);
}
