#include "main.h"

/**
 * times_table - prints the 9 times table.
 * Return: nothing.
 */
void times_table(void)
{
	int i;
	int j;
	int product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
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
				if (product / 10 == 0)
					_putchar(' ');
				else
					_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
