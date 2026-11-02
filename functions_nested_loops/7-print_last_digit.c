#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: an integer
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last = last * -1; /* C does modulo arithmetic lazily */
	_putchar(last + '0');
	return (last);
}
