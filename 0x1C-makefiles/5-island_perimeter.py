#!/usr/bin/python3
""" island_perimeter  """


def island_perimeter(grid) -> float:
    """ This function returns the perimeter of island """
    width = len(grid[0])
    height = len(grid)
    size = 0
    edges = 0
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (i > 0 and grid[i-1][j] == 1):
                    edges += 1
                if (j > 0 and grid[i][j-1] == 1):
                    edges += 1
    perimeter = 4*size - 2*edges
    return perimeter
