#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a previously allocated 2-dimensional grid of integers.
 * @grid: the 2-dimensional array
 * @height: The height of the array
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
