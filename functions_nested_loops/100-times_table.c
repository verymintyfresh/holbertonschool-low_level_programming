#include "main.h"

/**
 * print_times_table - prints a times table.
 * @n: an integer.
 * Return: nothing.
 */
void print_times_table(int n)
{
	int i;
	int j;
	int product;

	if (n < 0 || n > 15)
		return;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;
			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if (product / 100 == 0)
					_putchar(' ');
				else
					_putchar(product / 100 + '0');
				if (product / 100 == 0 && product % 100 / 10 == 0)
					_putchar(' ');
				else
					_putchar(product % 100 / 10 + '0');
				_putchar(product % 10 + '0');
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
