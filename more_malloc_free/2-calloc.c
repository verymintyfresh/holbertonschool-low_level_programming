#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb - Number of elements of the array
 * @size - Size of an element
 * Return: The array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < nmemb * size)
	{
		*((char *)ptr + i) = '\0';
		i++;
	}

	return (ptr);
}
