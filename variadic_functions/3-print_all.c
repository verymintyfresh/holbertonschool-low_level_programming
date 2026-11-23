#include "variadic_functions.h"

/**
 * print_all - Prints a list of anything
 * @format: a list of characters determining the format of the arguments
 * Return: nothing.
 */
void print_all(const char *format, ...)
{
	int i;
	int f;
	va_list ap;
	char character;
	int integer;
	float floating;
	char *string;
	char *formats;
	va_list ap_copy;

	formats = "cifs";
	va_start(ap, format);
	i = 0;
	while (format[i] != '\0')
	{
		f = 0;
		while (formats[f] != '\0')
		{
			if (formats[f] == format[i]) /* got a match */
			{
				va_copy(ap_copy, ap);
				
			}
		}
	}
}
