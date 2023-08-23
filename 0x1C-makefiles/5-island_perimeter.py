#!/usr/bin/python3
"""island perimeter calculations"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    total = 0
    connection = 0
    length = len(grid)
    width = len(grid[0])

    for i in range(length):
        for j in range(width):
            if grid[i][j] == 1:
                total += 4
            # top check
                if i != 0 and grid[i - 1][j] == 1:
                    connection += 1
            # right check
                if j != width and grid[i][j + 1] == 1:
                    connection += 1
    return (total - (2 * connection))
