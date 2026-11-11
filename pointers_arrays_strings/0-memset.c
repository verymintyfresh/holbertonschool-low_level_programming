#include "main.h"

/**
 * _memset - sets the first n bytes of a memory area
 * @s: the buffer
 * @b: the byte to fill the buffer with
 * @n: how many bytes to fill
 * Return: the buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
