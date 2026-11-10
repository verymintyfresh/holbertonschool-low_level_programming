#include "main.h"
#include <stdio.h>

/**
 * leet - translates a string into 1337 73x7
 * @str: the string
 * Return: the string
 */
char *leet(char *str)
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

	replace_lower = "4bcd3fghijk1mn0pqrs7uvwxyz";
	replace_upper = "4BCD3FGHIJK1MN0PQRS7UVWXYZ";
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
	else
	{
		return (c);
	}
}
