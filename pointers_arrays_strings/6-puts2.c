#include "main.h"

/**
 * puts2 - prints every other character in a string
 * @str: a string
 * Return: nothing.
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		if (i == 0)
			_putchar(*str);
		i = !i;
		str++;
	}
	_putchar('\n');
}
