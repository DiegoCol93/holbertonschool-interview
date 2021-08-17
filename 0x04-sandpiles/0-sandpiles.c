#include "sandpiles.h"
/**
 *
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int i = 0;
	int j = 0;

	while (i <= 3)
	{
		while (j <= 3)
		{
			grid1[i][j] = grid1[i][j] + grid2[i][j];
			j++;
		}
		i++;
	}
	print_grid(grid1);
}
