#!/usr/bin/python3

def island_perimeter(grid):
    water = 0
    land = 1
    perimeter = 0

    for col, level in enumerate(grid):
        for row, parcel in enumerate(level):
            if parcel == land:  # Checking only when hitting land
                    if row == 0 or grid[col][row - 1] == water:  # Looking west
                        perimeter += 1
                    if (row + 1) == len(level) or grid[col][row + 1] == water:
                        perimeter += 1
                    if row == 0 or grid[col - 1][row] == water:  # Looking north
                        perimeter += 1
                    if (col + 1) == len(grid) or grid[col + 1][row] == water:
                        perimeter += 1

    return perimeter
