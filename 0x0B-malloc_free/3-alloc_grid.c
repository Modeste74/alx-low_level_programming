#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Entry point
 * @width: to be columns of the 2-d array
 * @height: to  be the no of rows
 * Return: matrix array
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int n, m;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
	{
		free(matrix);
		return (NULL);
	}
	for (n = 0; n < height; n++)
	{
		matrix[n] = malloc(width * sizeof(int));
		if (matrix[n] == NULL)
		{
			for (n--; n >= 0; n--)
			{
				free(matrix[n]);
				free(matrix);
				return (NULL);
			}
		}
	}
	for (n = 0; n < height; n++)
	{
		for (m = 0; m < width; m++)
		{
			matrix[n][m] = 0;
		}
	}
	return (matrix);
}
