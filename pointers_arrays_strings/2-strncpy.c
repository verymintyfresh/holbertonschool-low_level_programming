#include "main.h"

/**
 * _strncpy - copies a specified number of characters into a string
 * @dest: the first string
 * @src: the second string
 * @n: how many characters to copy from @src
 * Return: the first string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *orig_dest;
	int i;

	if (n <= 0)
		return (dest);

	i = 0;
	orig_dest = dest;
	while (*src != '\0' && i != n)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	while (i != n) /* as per man (3) THE FUNCTION */
	{
		*dest = '\0';
		dest++;
		i++;
	}

	return (orig_dest);
}
