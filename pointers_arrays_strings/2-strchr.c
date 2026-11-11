#include "main.h"
#include <stddef.h>

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
