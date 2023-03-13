#include "main.h"
#include <stdlib.h>

/**
 * free_grid - prototype head
 * @grid: pointer to the allocated memory
 * @height: rows of the array
 * return: void
 */
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
