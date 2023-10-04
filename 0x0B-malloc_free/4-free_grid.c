#include "main.h"

/**
 * free_grid - free
 * @grid: grid
 * @height: height
 *
 * Retutn: return.
 */
void free_grid(int **grid, int height)
{
	int b;

	for (b = 0; b < height; b++)
	{
		free(grid[b]);
	}
	free(grid);
}
