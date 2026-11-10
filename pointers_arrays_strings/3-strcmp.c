#include "main.h"

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
	if (*s1 == '\0' || *s2 == '\0') /* end of one string but not the other */
		return (*s1 - *s2);

	return (0);
}
