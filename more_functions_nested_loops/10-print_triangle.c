#include "main.h"

/**
 * print_triangle - Prints a triangle.
 * @size: the height of the triangle.
 * Return: nothing.
 */
void print_triangle(int size)
{
	int n = size;
	int i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (n = 1; n <= size; n++)
	{
		for (i = 0; i < size - n; i++)
			_putchar(' ');
		for (i = 0; i < n; i++)
			_putchar('#');
		_putchar('\n');
	}
}
