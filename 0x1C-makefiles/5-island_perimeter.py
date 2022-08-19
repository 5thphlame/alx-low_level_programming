#!/usr/bin/python3
"""Defines the fuction for perimeter of an island"""


def island_perimeter(grid):
    """Returns the perimeter of an island
    Args:
        grid(list of list):
            containing 0 and 1
                0 representing water area
                1 representing land
    Returns:
        The perimeter of the island
    """
    w = len(grid[0])
    h = len(grid)
    edge = 0
    size = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j-1] == 1):
                    edge += 1
                if (i > 0 and grid[i-1][j] == 1):
                    edge += 1
    return size * 4 - edge * 2
