#include "main.h"
#include <stddef.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	i = 0;
	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}

	return (ptr);
}
