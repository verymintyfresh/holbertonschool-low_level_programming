#include "main.h"

/**
 * cap_string - capitalises every word of a string
 * @str: the string
 * Return: the string
 */
char *cap_string(char *str)
{
	char *orig;

	orig = str;
	while (*str != '\0')
	{
		if (str == orig)	/* first character */
		{
			if (*str >= 97 && *str <= 122)
				*str -= 32;
		}
		else if (should_cap(str))	/* previous character was a 'space' */
		{
			if (*str >= 97 && *str <= 122)
				*str -= 32;
		}
		str++;
	}

	return (orig);
}

/**
 * should_cap - checks if previous character was a 'space'
 * @str: address in memory to check (guaranteed not at the start of the string)
 * Return: 1 if the previous character was a 'space', 0 otherwise
 */
int should_cap(char *str)
{
	char it;

	it = *(str - 1);
	if (it == ' ' || it == '\t' || it == '\n' || it == ',')
		return (1);
	else if (it == ';' || it == '.'  || it == '!'  || it == '?')
		return (1);
	else if (it == '"' || it == '('  || it == ')'  || it == '{' || it == '}')
		return (1);
	else
		return (0);
}
