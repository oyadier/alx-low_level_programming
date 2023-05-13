#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *crt_buffer(char *f);
void _close_file(int fd);

/**
 * crt_buffer - create buffer for file by
 *		calculating the memory size.
 * @file: The file name that buffer is created for.
 *
 * Return: a character pointer for the buffer;
 */
char *crt_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		dprintf(STDERR_FILENO,
				"Error, Can't write to %s\n", file);
				exit(99);
	}

	return (buffer);
}

/**
 * _close_file - close any file descriptor
 *@file_des: file descriptor
 * Return: void;
 */


void _close_file(int file_des)
{
	int c;

	c = close(file_des);
	if (c == -1)
	{
		dprintf(STDERR_FILENO,
				"Error, Can't close fd %d\n", file_des);
		exit(100);
	}
}




/**
 * main  - copy content of source file to destination
 * @argc: the number of parameter input
 * @argv: the array of string printer
 *
 * Return: 0 if success
 */

int main(int argc, char **argv)
{
	char *buffer;
	int file_w, file_r, file_to, file_from;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = crt_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	file_r = read(file_from, buffer, 1024);

	do {
		if (file_from == -1 || file_r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		file_w = write(file_to, buffer, file_r);
		if (file_to == -1 || file_w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		file_r = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (file_r > 0);

	free(buffer);
	_close_file(file_from);
	_close_file(file_to);
	return (0);
}
