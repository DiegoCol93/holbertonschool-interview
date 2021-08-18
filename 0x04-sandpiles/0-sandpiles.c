#include "sandpiles.h"
static void print_grid(int grid[3][3]);

/**
 * sandpiles_sum - Sums 2 grids, topples the "sandpile" and prints a resulting
 *                 stable "sandpile" at the end.
 *      Args:
 *     @grid1:   - Left 3x3 int grid.
 *     @grid2:   - Right 3x3 int grid.
 */

void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int i = 0, j = 0;

	printf("=\n");
	while (stable(grid1) != 0)
	{
		for (i = 0; i <= 3; i++)
			for (j = 0; j <= 3; j++)
				grid1[i][j] = grid1[i][j] + grid1[i][j];

		print_grid(grid1);
		topple(grid1);
	}
	printf("=\n");
}

/**
 * topple - "Shakes" the grid to make the sand move one step and calculates the
 *          new transform matrix for next step.
 *   Args:
 *  @grid1: 3x3 int grid.
 *  @grid2: 3x3 int grid.
 *
 *  Return: The new transform matrix calculated.
 */

int* topple(int grid1[3][3], int grid2[3][3])
{
	int i = 0, j = 0;

	

	return(grid2);
}



/**
 * stable - Checks if the 3x3 grid is stable
 * @grid: 3x3 int grid.
 * Return: 0 if stable(all numbers less than 3)
 *         1 if not.
 */
int stable(int grid[3][3])
{
	int i = 0, j = 0;

	for (i = 0; i <= 3; i++)
		for (j = 0; j <= 3; j++)
			if (grid[i][j] > 3)
				return(1);
	return(0);
}

/**
 * print_grid - Print 3x3 grid
 * @grid: 3x3 grid
 *
 */
static void print_grid(int grid[3][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j)
                printf(" ");
            printf("%d", grid[i][j]);
        }
        printf("\n");
    }
}
