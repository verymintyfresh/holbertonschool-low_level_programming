#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - does the Fizz Buzz test
 * Return: nothing
 */
void fizz_buzz(void)
{
	int i;
	
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
		printf(" ");
	}
	printf("\n");
}

/**
 * main - Entry point
 * Return: always 0 (success)
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
