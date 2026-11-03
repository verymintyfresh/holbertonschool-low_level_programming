#include "main.h"

/**
 * print_diagonal - prints a line of backslashes
 * @n: an integer
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n <= 0)
		_putchar('\n');

	while (n > 0)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');	
		}
			_putchar('\\');
		n--;
		i++;
		_putchar('\n');
	}
}
