#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the first string
 * @src: the second string
 * Return: the concatenation of the two strings
 */
char *_strcat(char *dest, char *src)
{
	char *orig_dest;

	orig_dest = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (orig_dest);
}
