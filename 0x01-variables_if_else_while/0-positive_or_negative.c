#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main: this contains only random numbers
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_num = n % 10;
	if (last_numb > 5)
	{
		printf("Last digit of %d is %d and is less than 5 and not 0", n , last_num);
	}
	else if (last_num == 0)
	{
		print("Last digit of %d is %d and is 0",n,last_num);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0",n,last_num);
	}
}
