#include "main.h"

/**
 * _islower - checks whether a character is lowercase
 * @c: an integer which represents an ASCII character
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
