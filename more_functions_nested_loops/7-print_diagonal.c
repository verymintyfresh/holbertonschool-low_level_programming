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
