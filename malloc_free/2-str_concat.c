#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings to a new memory location.
 * @s1: the first string
 * @s2: the second string
 * Return: The concatenation of the two strings.
 */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int i;
	int j;
	char *ptr;

	len1 = str_len(s1);
	len2 = str_len(s2);

	ptr = malloc(1 + (len1 + len2) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		*(ptr + i) = *(s1 + i);
		i++;
	}
	j = 0;
	while (j < len2)
	{
		*(ptr + i) = *(s2 + j);
		i++;
		j++;
	}
	*(ptr + i) = '\0';

	return (ptr);
}

/**
 * str_len - Returns the length of a string.
 * @str: the string
 * Return: the length of the string, or 0 if the string is NULL.
 */
int str_len(char *str)
{
	int i;

	i = 0;
	if (str != NULL)
	{
		while (*(str + i) != '\0')
			i++;
	}

	return (i);
}
