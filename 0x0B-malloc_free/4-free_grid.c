#include "main.h"

/**
 * free_grid - frees a 2D grid
 * @grid: 2D array
 * @height: int
*/

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);

		}

		free(grid);

	}
}
