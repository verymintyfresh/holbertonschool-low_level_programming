#include <stdio.h>

/**
 * main - prints every digit in base 16
 * Return: always zero.
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (i = 97; i <= 102; i++)
		putchar(i);
	putchar(10);

	return (0);
}
