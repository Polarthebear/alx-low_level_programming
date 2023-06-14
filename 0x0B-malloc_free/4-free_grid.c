#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - main entry point
 * @grid: grid
 * @height: height
 * Description: Frees the previous 2D array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
