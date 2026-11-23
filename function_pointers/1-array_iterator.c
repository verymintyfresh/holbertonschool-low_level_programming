#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - performs a given action on each element of an array
 * @array: an array of ints
 * @size: the size of the array
 * @action: pointer to a function describing an action to perform
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
