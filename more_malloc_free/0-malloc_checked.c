#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory, but exits the program on failure
 * @b: the number of bytes to allocate
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
