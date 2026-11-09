#include "main.h"

/**
 * _strcpy - Copies a string to another location in memory.
 * @dest: pointer to the destination location.
 * @src: pointer to the original string location.
 * Return: pointer to the destination location.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;			/* use a counter instead of directly incrementing */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];	/* add the final null byte this time */

	return (dest);
}
