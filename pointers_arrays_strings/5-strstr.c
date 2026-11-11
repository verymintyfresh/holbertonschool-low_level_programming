#include "main.h"
#include <stddef.h>

/**
 * _strstr - Finds the first occurrence of a substring
 * @haystack: The string to search within
 * @needle: The string to search for
 * Return: the first location of the substring, or NULL otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (_strcmp(haystack, needle) == 0)
		{
			return (haystack);
		}
		haystack++;
	}

	return (NULL);
}

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: The difference between the first non-matching byte, or 0 if the same
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
