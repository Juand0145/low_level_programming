#!/usr/bin/python3
'''Island perimeter'''


def island_perimeter(grid):
    '''Function to calculate the perimeter of and island'''
    
    perimeter = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1

    for i, row in enumerate(grid):
        for j, value in enumerate(row):
            if value == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if i == length or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if j == width or grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter