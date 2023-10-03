#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional grid
 * @width: int, width
 * @height: int, height
 * Return: pointer to pointer pointing to an int
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	grid = malloc(height * sizeof(*grid));

	if (width <= 0 || height <= 0 || grid == NULL)
	{
		return (NULL);
	}
	else
	{
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == NULL)
		{
			while (i--)
			{
				free(grid[i]);

			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}

	}
	}

	return (grid);

}
