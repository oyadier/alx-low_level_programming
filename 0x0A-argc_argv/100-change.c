#include <stdio.h>
#include <stdlib.h>
/**
 * main - compute the number of coins needed for a coin change
 * @argc: the number of argument
 * @argv: the array of string pointers
 *
 * Return: 0 success
 */

int main(int argc, char **argv)
{
	int cent, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	cent = atoi(argv[1]);

	count += cent / 25;
	cent %= 25;
	count += cent / 10;
	cent %= 10;
	count += cent / 5;
	cent %= 5;
	count += cent / 2;
	cent %= 2;
	count += cent;
	printf("%d\n", count);

	return (0);
}
