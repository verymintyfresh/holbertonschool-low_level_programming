#include "main.h"
#include <stdio.h>

/**
 * multiples - calculates the sum of multiples of 3 or 5 below 1024
 * Return: the sum
 */
void multiples(void)
{
	unsigned int sum;
	int i;

	i = 0;
	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
		i++;
	}
	printf("%u\n", sum);
}

/**
 * main - entry point of the program
 * Return: always 0 (success)
 */
int main(void)
{
	multiples();
	return (0);
}
