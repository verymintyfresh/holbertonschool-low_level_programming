#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string in-place
 * @s: a string
 * Return: nothing.
 */
void rev_string(char *s)
{
	char *init;
	int i;
	char tmp;

	init = s;			/* Set initial memory value */
	i = 0;

	while (*s != '\0')		/* Find end of string */
	{
		i++;
		s++;
	}

	i--;				/* Don't use the null character */
	i = i / 2;
	s--;

	while (i >= 0)			/* Swap each character outside-in */
	{
		tmp = *s;
		*s = *init;
		*init = tmp;
		init++;
		s--;
		i--;
	}
}
