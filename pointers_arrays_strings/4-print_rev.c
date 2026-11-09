#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: a string
 * Return: nothing.
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{			/* Count the number of characters */
		i++;
		s++;
	}
	while (i >= 0)
	{			/* Print everything backwards */
		_putchar(*s);
		i--;
		s--;
	}
	_putchar('\n');
}
