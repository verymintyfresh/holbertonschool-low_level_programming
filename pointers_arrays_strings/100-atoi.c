#include "main.h"
#include <stdio.h>

/**
 * _atoi - Finds a number from a string.
 * @s: a string.
 * Return: the first number in the string, or 0 if there are none.
 */
int _atoi(char *s)
{
	char *start;
	int digits;
	int sign;
	int done;

	start = 0;
	digits = 0;
	sign = 0;
	done = 0;
	while (*s != '\0' && !done)
	{
		if (*s == '-')
			sign -= 1;
		else if (*s == '+')
			sign += 1;
		else if (*s >= '0' && *s <= '9')
		{
			start = s;
			digits++;
			while (*(s + 1) >= '0' && *(s + 1) <= '9')
			{
				s++;
				digits++;
			}
			done = 1;
		}
		s++;
	}
	if (sign < 0)
		sign = -1;
	else
		sign = 1;

	if (start == 0)
		return (0);
	else
		return (sign * convert_digits(start, digits));
}

/**
 * convert_digits - Converts a string of digits to an integer.
 * @start: the initial character
 * @digits: the number of characters to read
 * Return: the number represented by the string.
 */
int convert_digits(char *start, int digits)
{
	unsigned int sum;			/* deal with numbers too negative for `int' */

	sum = *start - '0';
	while (digits > 1)
	{
		digits--;
		start++;
		sum *= 10;
		sum += *start - '0';
	}
	return (sum);
}
