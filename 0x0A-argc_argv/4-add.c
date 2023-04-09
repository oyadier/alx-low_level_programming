#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive positive numbers
 * @argc: the number of arguments entered
 * @argv: the arrays of string pointers
 *
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int i;
	int add = 0;

	if (argc == 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				add += atoi(argv[i]);
		
			}
		}
		printf("%d\n", add);

	}
	return (0);
}
