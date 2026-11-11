#include "main.h"
#include <stdio.h>

/**
 * rot13 - translates a string using the ROT13 algorithm
 * @str: the string
 * Return: the string
 */
char *rot13(char *str)
{
	char *orig;

	orig = str;
	while (*str != '\0')
	{
		*str = replace(*str);
		str++;
	}

	return (orig);
}

/**
 * replace - replaces (or not) a character into leetspeak
 * @c: the character
 * Return: the character after replacement has (possibly) occurred
 */
char replace(char c)
{
	int i;
	char *replace_lower;
	char *replace_upper;
	int upper;
	int lower;
	int check;

	replace_lower = "nopqrstuvwxyzabcdefghijklm";
	replace_upper = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	check = (c - 'A') % 32;
	i = 0;
	upper = (c >= 65 && c <= 90);
	lower = (c >= 97 && c <= 122);

	while (i < check)
	{
		replace_lower++;
		replace_upper++;
		i++;
	}

	if (upper || lower)
	{
		return (*replace_lower * lower + *replace_upper * upper);
	}

	return (c);
}
