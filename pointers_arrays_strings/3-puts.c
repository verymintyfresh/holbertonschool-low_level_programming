#include "main.h"

/**
 * _puts - prints a string to standard out
 * @str: a string
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
