#!/usr/bin/python3
'''Island perimeter'''


def island_perimeter(grid):
    '''Function to calclate the perymeter of and island'''
    perymeter_per_unit = []
    i = 0
    j = 0
    for row in grid:
        j = 0
        for value in row:
            unit_perymeter = 0
            if value == 1:
                try:
                    if grid[i - 1][j] == 0:
                        unit_perymeter += 1
                except:
                    pass

                try:
                    if grid[i + 1][j] == 0:
                        unit_perymeter += 1
                except:
                    pass

                try:
                    if grid[i][j - 1] == 0:
                        unit_perymeter += 1
                except:
                    pass

                try:
                    if grid[i][j + 1] == 0:
                        unit_perymeter += 1
                except:
                    pass
                perymeter_per_unit.append(unit_perymeter)
            j += 1
        i += 1

    return sum(perymeter_per_unit)
