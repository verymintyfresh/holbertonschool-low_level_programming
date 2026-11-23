#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - Prints a list of numbers with a given separator
 * @separator: the separator string
 * @n: the number of ints to print
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	i = 0;
	while (i < n - 1)
	{
		if (separator == NULL)
			printf("%d", va_arg(ap, int));
		else
			printf("%d%s", va_arg(ap, int), separator);
		i++;
	}
	printf("%d\n", va_arg(ap, int));
	va_end(ap);

}
