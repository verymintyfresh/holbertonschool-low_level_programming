#include "main.h"

/**
 * string_toupper - changes a string to all uppercase
 * @str: the string
 * Return: the string
 */
char *string_toupper(char *str)
{
	char *orig;

	orig = str;
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		{
			*str -= 32;
		}
		str++;
	}
	return (orig);
}
