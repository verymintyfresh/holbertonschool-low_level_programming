#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints a list of numbers up to 98
 * @n: an integer
 * Returns: nothing
 */
void print_to_98(int n)
{
	int direction;

	if (n > 98)
		direction = -1;
	else
		direction = 1;

	while (n != 98)
	{
		printf("%d, ", n);
		n += direction;
	}
	printf("98\n");
}
