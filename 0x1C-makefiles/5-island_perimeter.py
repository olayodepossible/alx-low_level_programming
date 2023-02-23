#!/usr/bin/python3

"""
Module Island Perimeter
"""


def island_perimeter(grid):
    """ Calculate perimeter of grid of an island
     The grid represents water by 0 and land by 1.
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    p = 0
    height = len(grid)
		if grid != []:
    		width = len(grid[0])
    for a in range(height):
        for b in range(width):
            if (grid[a][b] == 1):
                if (a - 1) == -1 or grid[a - 1][b] == 0:
                    p += 1
                if (a + 1) == nrows or grid[a + 1][b] == 0:
                    p += 1
                if (b - 1) == -1 or grid[a][b - 1] == 0:
                    p += 1
                if (b + 1) == ncolumns or grid[a][b + 1] == 0:
                    p += 1
    return p
