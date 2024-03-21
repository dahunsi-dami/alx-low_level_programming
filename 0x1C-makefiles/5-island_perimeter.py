#!/usr/bin/python3
"""Module returning perimeter of island described in grid."""


def island_perimeter(grid):
    """
    island_perimeter(grid) function to calculate
    perimeter of an island represented in grid format.

    Args:
        grid: a list of list of 1s (land) & 0s (water)
    """
    wid = len(grid[0])
    hei = len(grid)
    p = 0

    for h in range(hei):
        for w in range(wid):
            if grid[h][w] == 1:

                if grid[h-1][w] == 0:
                    p += 1

                if grid[h][w-1] == 0:
                    p += 1

                if grid[h][w+1] == 0:
                    p += 1

                if grid[h+1][w] == 0:
                    p += 1
            else:
                p += 0
    return p
