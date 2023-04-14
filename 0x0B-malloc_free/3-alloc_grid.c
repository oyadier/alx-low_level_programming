#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create 2 dimensional array of integers
 * @width: the row of the dimension
 * @height: the column of the dimension
 * Return:  a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **grid; /* declare a pointer to a pointer to an integer*/
	int i, j;

	/* Check for invalid arguments*/
	if (width <= 0 || height <= 0)
		return (NULL);


	/* Allocate memory for the rows*/
	grid = (int **) malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);


	/* Allocate memory for the column*/
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Free the previously allocated memory and return NULL on failure*/
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}

		/* Initialize the elements of the grid to 0*/
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
