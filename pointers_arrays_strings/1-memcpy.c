#include "main.h"

/**
 * _memcpy - Copies memory from one location to another
 * @dest: the destination memory location
 * @src: the source memory location
 * @n: the number of bytes to copy
 * Return: the destination memory location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
