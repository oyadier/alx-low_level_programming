#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints
 *		 it to the POSIX standard output.
 * @filename: file to be read
 * @letters: buffer size
 * Return: the number of bytes written to stdo
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	File *file;
	char *buffer;
	ssize_t r_bytes;
	ssize_t w_bytes;

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = malloc(sizeof (char) * (letter + 1));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	r_bytes = fread(buffer, sizeof(char), letters, file);
	if (r_byte == 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	w_bytes = fwrite(buffer, sizeof(char), r_bytes, stdout);
	if (w_bytes != r_bytes)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	fclose(file);
	free(buffer);

	return (w_bytes);
}

