#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <sys/stat.h>
/**
 * create_file - function that create file
 * @filename: the name of the to be created
 * @text_content: a unll terminated string to write to file
 *
 * Return: 1 if successful
 */

int create_file(const char *filename, char *text_content)
{
	FILE *fptr;


	if (!filename)
	{
		return (-1);
	}

	fptr = fopen(filename, "w");
	if (fptr == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		fputs("", fptr);
	}
	else
		fputs(text_content, fptr);

	fclose(fptr);
	chmod(filename, S_IRUSR | S_IWUSR);

	return (1);
}

