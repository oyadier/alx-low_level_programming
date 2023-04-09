#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: the number of arguments
 * @argv: the arrays of string pointer
 *
 * Return: 0 success
 */

int main(int argc, char **argv)
{
	int i;
	int mult = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);

		}
		printf("%d\n", mult);
	}

	return (0);
}
