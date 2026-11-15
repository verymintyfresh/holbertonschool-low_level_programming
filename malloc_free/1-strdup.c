#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Creates a copy of a string
 * @str: the string
 * Return: the copy of the string
 */
char *_strdup(char *str)
{
	int len;
	char *ptr;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (*(str + len) != '\0')
		len++;

	ptr = malloc(1 + len * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	len = 0;
	while (*(str + len) != '\0')
	{
		*(ptr + len) = *(str + len);
		len++;
	}

	return (ptr);
}
