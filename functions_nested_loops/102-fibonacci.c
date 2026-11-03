#include "main.h"
#include <stdio.h>

/**
 * fibonacci - prints the first 50 fibonacci numbers
 * Return: nothing
 */
void fibonacci(void)
{
	long i = 1;
	long j = 1;
	long tmp;
	int n;

	for (n = 0; n < 49; n++)
	{
		printf("%ld,\xc2\xa0", i);
		tmp = i;
		i = i + j;
		j = tmp;
	}
	printf("%ld\n", i);
}
