#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Creates a 2-dimensional array of integers
 * @width: the number of columns
 * @height: the number of rows
 * Return: the array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int *row;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		j = 0;
		row = malloc(width * sizeof(int));
		if (row == NULL)
			return (NULL);
		while (j < width)
		{
			*(row + j) = 0;
			j++;
		}
		ptr[i] = row;
		i++;
	}

	return (ptr);
}
