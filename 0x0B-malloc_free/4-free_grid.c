#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that free
 * @grid: The grid
 * @height: The height
 * Description: free
 *
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	int b = 0;

	for (; b < height; b++)
		free(grid[b]);
	free(grid);
}
