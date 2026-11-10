#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: an array
 * @n: the number of elements of the array
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	tmp = 0;
	i = 0;
	while (i < (n + 1) / 2)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
		i++;
	}
}
