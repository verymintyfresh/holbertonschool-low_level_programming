#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *format, ...);

void print_comma(const char *, unsigned int);
void print_string(va_list ap);

/**
 * struct format_s - associates format specifiers with functions
 * @c: a format specifier
 * @f: a function detailing how to print c
 */
typedef struct format_s
{
	char c;
	void (*f)(va_list);
} format_t;

#endif
