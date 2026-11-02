#include <stdio.h>

/**
 * main - Prints single digit numbers in one line.
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");

	return (0);
}
