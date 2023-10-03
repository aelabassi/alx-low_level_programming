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

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	grid = malloc(width * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(height * sizeof(int));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(grid[i]);

			}
			free(grid);
			return (NULL);
		}

	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);

}
