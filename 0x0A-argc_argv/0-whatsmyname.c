#include <stdio.h>
/**
 * main - print the name of the program
 * @argc: the number of parameter
 * @argv: the array of string pointers
 * Return: 0 (success);
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}
