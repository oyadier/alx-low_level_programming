#include <stdio.h>
/**
 * main - printing of all the size of data type using sizeOf
 *
 * Return: Alwarys 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)",sizeOf(char));
	printf("Size of an int: %d byte(s)",sizeOf(int));
	printf("Size of a long int: %d byte(s)",sizeOf(long int));
	printf("Size of a long long int: %d byte(s)",sizeOf(long long int));
	printf("Size of a float: %d byte(s)",sizeOf(float));
	return (0);
}
