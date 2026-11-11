#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Finds the first occurrence of any accepted byte in memory
 * @s: memory to search
 * @accept: accepted bytes
 * Return: the location of the first accepted byte, or NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	while (_strchr(accept, *s) == NULL && *s != '\0')
	{
		s++;
	}
	if (*s == '\0')
		return (NULL);
	return (s);
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
