#!/usr/bin/python3
""" Define a function that gets an island perimeter """

def island_perimeter(grid):
    """ return island perimeter """
    h = len(grid) # Grid heigth
    w = len(grid[0]) # Grid width
    aux1 = 0
    aux2 = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                aux1 += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    aux2 += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    aux2 += 1
    return aux1 * 4 - aux2 * 2
