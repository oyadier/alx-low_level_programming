#include <stdio.h>
#include "main.h"
/**
 * main - print the number of arguments passed
 * @argc: the number of parameters entered
 * @argv: array of pointers of string
 * Return: 0 (Successfuly completed)
 */

int main(int argc, char **argv __attribute__((unused)))
{

	printf("%d", argc - 1);
	printf("\n");


	return (0);
}
