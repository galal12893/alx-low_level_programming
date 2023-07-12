#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees prev grid
 *
 * @grid: to free
 * @height: theh eight
 *
 * Return: pointer to 2d array
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
