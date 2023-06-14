#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - main entry point
 * @width: width
 * @height: height
 * Description: Returns a 2D array of integers
 * Return: 0 if NULL
 */
int **alloc_grid(int width, int height)
{
	int **xxx;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	xxx = malloc(sizeof(int *) * height);

	if (xxx == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		xxx[x] = malloc(sizeof(int) * width);

		if (xxx[x] == NULL)
		{
			for (; x >= 0; x--)
				free(xxx[x]);

			free(xxx);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			xxx[x][y] = 0;
	}

	return (xxx);
}

