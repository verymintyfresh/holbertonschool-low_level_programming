#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints strings with a given separator
 * @separator: the separator
 * @n: the number of arguments in ...
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *s;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	i = 0;
	va_start(ap, n);
	while (i < n - 1)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			s = "(nil)";
		if (separator == NULL)
			printf("%s", s);
		else
			printf("%s%s", s, separator);
		i++;
	}
	s = va_arg(ap, char *);
	if (s == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", s);
	va_end(ap);
}
