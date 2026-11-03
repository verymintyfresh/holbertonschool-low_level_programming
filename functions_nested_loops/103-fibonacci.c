#include "main.h"
#include <stdio.h>

/**
 * fibonacci_sum - calculates the sum of even-valued fibonacci numbers
 * Return: the sum
 */
long fibonacci_sum(void)
{
	long i = 1;
	long j = 1;
	long tmp;
	long sum;

	while (i < 4000000)
	{
		if (i % 2 == 0)
			sum += i;
		tmp = i;
		i = i + j;
		j = tmp;
	}

	return (sum);
}

/**
 * main - Entry point of the program
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("%ld\n", fibonacci_sum());

	return (0);
}
