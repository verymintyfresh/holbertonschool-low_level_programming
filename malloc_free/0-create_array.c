#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - Creates and initialises an array
 * @size: The size of the array
 * @c: The byte to initialise the array with
 * Return: the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	i = 0;
	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)		/* handle malloc failure */
		return (NULL);

	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}

	return (ptr);
}
