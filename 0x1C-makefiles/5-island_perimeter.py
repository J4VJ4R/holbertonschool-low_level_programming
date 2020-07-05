#!/usr/bin/python3
"""create a function"""


def island_perimeter(grid):
    """island_perimeter class"""

    ct = 0
    ct2 = 0
    
    
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                ct += 1
                if i != 0 and grid[i - 1][j] == 1:
                    ct2 += 1
                if j != 0 and grid[i][j - 1] == 1:
                    ct2 += 1
                        
    return 4 * ct - 2 * ct2

            