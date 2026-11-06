#include "101-main.h"
#include <limits.h>

/**
 * _pow - calculates the power of a number
 * @base: the base
 * @n: the power
 * Return: base ** n
 */
int _pow(int base, int n)
{
	int i;
	int ret_val = 1;

	for (i = 0; i < n; i++)
		ret_val *= base;
	return (ret_val);
}

/**
 * print_number - prints a number using _putchar only
 * @n: the number to print
 * Return: nothing.
 */
void print_number(int n)
{
	int i;

	i = 1;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (_pow(10, i) <= n && _pow(10, i) > 0)
	{
		i++;
	}
	while (i >= 1)
	{
		_putchar(n / _pow(10, i - 1) + '0');
		n = n % _pow(10, i - 1);
		i--;
	}
}
