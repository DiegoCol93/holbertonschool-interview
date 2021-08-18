#ifndef SANDPILES_H
#define SANDPILES_H

#include <stdlib.h>
#include <stdio.h>

void sandpiles_sum(int grid1[3][3], int grid2[3][3]);

int stable(int grid[3][3]);

int* topple(int grid1[3][3], int grid2[3][3]);

#endif /* SANDPILES_H */
