#include "main.h"
#include <stdio.h>

/**
 * fibonacci - prints the first 50 fibonacci numbers
 * Return: nothing
 */
long fibonacci_sum(void)
{
	long i = 1;
	long j = 1;
	long tmp;
	long sum;
	int n = 0;

	while (i < 4000000)
	{
		if (n % 2 == 1) /* starting at 0 */
			sum += i;
		tmp = i;
		i = i + j;
		j = tmp;
		n++;
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
