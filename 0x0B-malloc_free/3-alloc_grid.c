#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - For building 2-dimensional array
 * @height: rows of the 2-D array
 * @width: columns of the 2-D array
 * Return: matrix
 */
int **alloc_grid(int height, int width)
{
	int p, q;
	int **matrix;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	matrix = malloc(sizeof(int *) * height);

	if (matrix == NULL)
	{
		free(matrix);
		return (NULL);
	}
	for (p = 0; p < height; p++)
	{

		matrix[p] = malloc(sizeof(int) * width);

		if (matrix[p] == NULL)
		{
			free(matrix);
			return (NULL);
		}
		for (q = 0; q < width; q++)
		{
			matrix[p][q] = 0;
		}
	}
	return (matrix);
}
