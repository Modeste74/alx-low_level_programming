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
	int p, q, l, r;
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
			for (l = p; l >= 0; l--)
			{
				free(matrix[p]);
			}
			free(matrix);
			return (NULL);
		}
	}
	for (r = 0; r < height; r++)
	{
		for (q = 0; q < width; q++)
		{
			matrix[r][q] = 0;
		}
	}

	return (matrix);
}
