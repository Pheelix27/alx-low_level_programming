#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Sets a 2 dimensional grid free.
 * @grid: the grid
 * @height: the height of the grid
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
