#include "main.h"
#include <stdlib.h>

/**
 * array_range - Generates an array containing a range of integers.
 * @min: the minimum value
 * @max: the maximum value
 * Return: the array.
 */
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	i = 0;
	while (min + i <= max)
	{
		array[i] = min + i;
		i++;
	}

	return (array);
}
