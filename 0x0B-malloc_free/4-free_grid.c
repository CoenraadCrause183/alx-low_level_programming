#include "main.h"

/**
 * free_grid - free array
 *
 * @grid: grid
 *
 * @height: grid height
 *
 * Return: always 0
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
