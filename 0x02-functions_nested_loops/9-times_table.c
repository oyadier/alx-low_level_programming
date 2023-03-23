#include "main.h"
#include <stdio.h>
/**
 * times_table - print 9 times table
 * Return: void
 */
void times_table(void)
{
	int outer, inner;
	int result;

	for (outer = 0; outer < 10; outer++)
	{
		for (inner = 0; inner < 10; inner++)
		{

			result = outer * inner;
			if (inner == 9)
			{
				printf("%d", result);
			}
			else
			printf("%d, ", result);
		}
		printf("\n");
	}
}
