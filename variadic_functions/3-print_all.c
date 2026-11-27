#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - Prints a list of anything
 * @format: a list of characters determining the format of the arguments
 * Return: nothing.
 */
void print_all(const char *format, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, format);
	i = 0;
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char)va_arg(ap, int));
				print_comma(format, i + 1);
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				print_comma(format, i + 1);
				break;
			case 'f':
				printf("%f", (float)va_arg(ap, double));
				print_comma(format, i + 1);
				break;
			case 's':
				print_string(ap);
				print_comma(format, i + 1);
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
}

/**
 * print_string - prints a char * from a variadic list
 * @ap: the variadic list
 * Return: nothing.
 */
void print_string(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_comma - prints a comma if necessary
 * @fmt: the format string
 * @i: the next character to print
 * Return: nothing.
 */
void print_comma(const char *fmt, unsigned int i)
{
	while (fmt[i] != '\0')
	{
		if (fmt[i] == 'c' || fmt[i] == 'i' ||
		    fmt[i] == 'f' || fmt[i] == 's') /* more to print */
		{
			printf(", ");
			return;
		}
		i++;
	}
}
