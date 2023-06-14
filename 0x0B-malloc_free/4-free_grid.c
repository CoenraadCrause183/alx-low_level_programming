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
	int i1;

	for (i1 = 0; i1 < height; i1++)
	{
/*CC*/		free(grid[i1]);
	}
	free(grid);
}
