#include "menger.h"
#include <stdio.h>
#include <math.h>

/**
 *  unit   - Checks if indices are (1, 1), if so, then square is blank
 *   @i:   ┃ Row Index
 *   @j:   ┃ Column Index
 * Return: ┃ 1 if (1, 1), 0 otherwise
 */
int unit(int i, int j)
{
	while (i != 0 && j != 0)
	{
		if (i % 3 == 1 && j % 3 == 1)
			return (0);

		i /= 3, j /= 3;
	}
	return (1);
}

/**
 *  menger  - Prints a fractal menger sponge of a given level.
 *  @level: ┃ int number for the level of the sponge to print.
 */
void menger(int level)
{
	int i, j, limit;

	if (level < 0)
		return;

	for (i = 0, limit = pow(3, level); i < limit; i++)
	{
		for (j = 0; j < limit; j++)
		{
			unit(i, j) == 1 ? printf("%c", '#') : printf("%c", ' ');
		}
		printf("\n");
	}
}
