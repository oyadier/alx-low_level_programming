#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * append_text_to_file - append(add) text at the end of a file
 * @filename: the name of the file to open
 * @text_content: the text to append at the end of the existing file
 *
 * Return: 1 if success else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fptr;

	if (!filename)
		return (-1);

	fptr = fopen(filename, "a");
	if (!fptr)
		return (-1);

	if (text_content)
		fputs(text_content, fptr);

	fclose(fptr);

	return (1);
}

