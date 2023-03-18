#include <stdio.h>
/**
 * main - printing of all the size of data type using sizeOf
 *
 * Return: Alwarys 0 (Success)
 */
int main(void)
{
	char letter;
	int number;
	long int long_number;
	long long l_l_number;
	float f_number;

	printf("Size of a char: %d byte(s)\n", sizeof(letter));
	printf("Size of an int: %d byte(s)\n", sizeof(number));
	printf("Size of a long int: %d byte(s)\n", sizeof(long_number));
	printf("Size of a long long int: %d byte(s)\n", sizeof(l_l_number));
	printf("Size of a float: %d byte(s)\n", sizeof(f_number));
	return (0);
}
