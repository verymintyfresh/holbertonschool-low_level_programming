#include <stdio.h>

/**
 * main - Prints all the digits of base 10 with `putchar`
 * Return: always zero
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	putchar(10);

	return (0);
}
