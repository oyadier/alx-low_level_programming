#include <stdio.h>
/**
 * main - print all arguments it receives
 * @argc: the number of arguments
 * @argv: the arrays of string pointers
 *
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}


	return (0);
}
