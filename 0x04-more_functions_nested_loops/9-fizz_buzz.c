#include <stdio.h>
#include "main.h"
/**
 * fizz_buzz - it print fizz_buzz
 * Return: Always 0 success
 */
void fizz_buzz(void)
{
	int counter;

	for (counter = 1; counter <= 100; counter++)
	{
		if (((counter % 3) == 0) && ((counter % 5) != 0))
		{
			printf("Fizz ");
		}
		else if (((counter % 5) == 0) && ((counter % 3) != 0))
		{
			printf("Buzz ");
		}
		else if (((counter % 3) == 0) && ((counter % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else
			printf("%d ", counter);
	}
}
