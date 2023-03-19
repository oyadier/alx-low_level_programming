#include <stdlib.h>
#include <time.h>
/**
 *  main: this generate random numbers
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else 
	{ 
		print("%d is negative", n);
	}
	return (0);
}
