#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: a string
 * Return: nothing.
 */
void puts_half(char *str)
{
	int i;
	char *tmp;

	tmp = str;
	i = 0;
	while (*tmp != '\0')
	{
		i++;
		tmp++;
	}

	str += (i + 1) / 2;			/* per spec */

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
