#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the first string
 * @src: the second string
 * @n: maximum characters to copy from @src
 * Return: the concatenation of the two strings
 */
char *_strncat(char *dest, char *src, int n)
{
	char *orig_dest;
	int i;

	if (n <= 0)
		return (dest);

	i = 0;
	orig_dest = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && i != n)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	*dest = '\0';

	return (orig_dest);
}
