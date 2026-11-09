#include "main.h"

/**
 * swap_int - swaps two values stored in pointers
 * @a: pointer to int
 * @b: pointer to int
 * Returns: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
