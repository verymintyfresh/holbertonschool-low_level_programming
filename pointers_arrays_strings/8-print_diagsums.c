#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the left and right diagonal sums of a square matrix
 * @a: the matrix
 * @size: the dimension of the matrix
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int left_sum;
	int right_sum;

	left_sum = 0;
	right_sum = 0;
	i = 0;
	while (i < size)
	{
		left_sum += a[i * size + i];
		right_sum += a[(i + 1) * size - i - 1];
		i++;
	}
	printf("%d, %d\n", left_sum, right_sum);
}
