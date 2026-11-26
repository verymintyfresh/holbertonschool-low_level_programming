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
	int f;
	va_list ap;
	format_t formats[4] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	va_start(ap, format);
	i = 0;
	while (format && format[i] != '\0')
	{
		f = 0;
		while (f < 4)
		{
			if (formats[f].c == format[i])
			{
				formats[f].f(ap);
				if (format[i + 1] != '\0')
					printf(", ");
			}
			f++;
		}
		i++;
	}
	printf("\n");
}

/**
 * print_char - prints a character from a variadic list
 * @ap: the variadic list
 * Return: nothing.
 */
void print_char(va_list ap)
{
	printf("%c", (char)va_arg(ap, int));
}


/**
 * print_int - prints an integer from a variadic list
 * @ap: the variadic list
 * Return: nothing.
 */
void print_int(va_list ap)
{
	printf("%i", va_arg(ap, int));
}

/**
 * print_float - prints a float from a variadic list
 * @ap: the variadic list
 * Return: nothing.
 */
void print_float(va_list ap)
{
	printf("%f", (float)va_arg(ap, double));
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
	printf("%s", str);
}
