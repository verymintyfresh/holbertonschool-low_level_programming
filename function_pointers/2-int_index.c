#include "function_pointers.h"

/**
 * int_index - searches an array for a specific predicate
 * @array: the array of ints
 * @size: the size of the array
 * @cmp: function to use to search the array
 * Return: the first element of the array where cmp is true.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	index = -1;
	if (size <= 0)
		return (index);

	index = 0;
	while (index < size)
	{
		if (cmp(array[index]))
			return (index);
		index++;
	}

	return (-1);	/* default value */
}
