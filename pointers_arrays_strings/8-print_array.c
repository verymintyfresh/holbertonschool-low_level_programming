#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints a number of variables from an array
 * @a: the array
 * @n: the number of variables to print
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		return;

	i = 1;
	while (i < n)
	{
		printf("%d, ", a[i - 1]);
		i++;
	}
	printf("%d\n", a[i - 1]);
}
