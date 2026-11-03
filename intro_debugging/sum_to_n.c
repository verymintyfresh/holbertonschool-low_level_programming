#include <stdio.h>

/**
 * sum_to_n - sums numbers to a given one
 * @n: an integer
 * Return: the nth triangle number
 */
int sum_to_n(int n)
{
	int i;
	int sum = 0;

	for (i = 1; i <= n; i++)
	sum += i;

	return (sum);
}

/* -- DO NOT Modify the code below this line -- */

/**
 * main - Entry point
 * Return: always 0 (success)
 */
int main(void)
{
	printf("%d\n", sum_to_n(10));
	return (0);
}
