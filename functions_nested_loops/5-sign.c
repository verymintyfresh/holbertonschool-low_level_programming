#include "main.h"

/**
 * print_sign - prints the sign of a given number
 * @n: an integer
 * Return: 1 if n is greater than zero, -1 if n is less than zero, 0 otherwise
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		_putchar('\n');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		_putchar('\n');
		return (1);
	}
	else
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
}
