#include "main.h"
#include "1-alphabet.c"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}
