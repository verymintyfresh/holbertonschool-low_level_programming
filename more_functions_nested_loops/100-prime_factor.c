#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * is_prime - checks if a number is prime
 * @n: the number
 * Return: 1 if prime, 0 if not
 */
int is_prime(long n)
{
	long i;

	for (i = 2; i < trunc(sqrt(n)); i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}

/**
 * prime_factor - finds the largest prime factor of a particular number
 * @n: an integer
 * Return: the largest prime factor of n
 */
long prime_factor(long n)
{
	long i;
	long answer;
	long test_max = trunc(sqrt(n));

	for (i = 2; i < test_max; i++)
	{
		if (n % i == 0)
		{
			if (is_prime(i))
				answer = i;
			if (is_prime(n / i))
				answer = fmax(i, n / i);
		}
	}
	return (answer);
}

/**
 * main - entry point of the program
 * Return: always 0 (success)
 */
int main(void)
{
	printf("%ld\n", prime_factor(612852475143));

	return (0);
}
