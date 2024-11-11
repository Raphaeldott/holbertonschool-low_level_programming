#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by alloc_grid
 * @grid: pointer to the 2D grid
 * @height: height of the grid (number of rows)
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Free each row in the grid */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* Free the array of row pointers */
	free(grid);
}
