#include "main.h"
#include <stddef.h>

/**
 * _strspn - Counts how many bytes of memory are contained within a buffer
 * @s: the memory to check
 * @accept: bytes to check for
 * Return: number of accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes;

	bytes = 0;
	while (_strchr(accept, *s) != NULL)
	{
		s++;
		bytes++;
	}
	return (bytes);
}

/**
 * _strchr - Finds the first occurrence of a character in a string
 * @s: the string
 * @c: the character to search for
 * Return: the location of the character, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
