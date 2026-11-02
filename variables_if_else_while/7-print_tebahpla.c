#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, back to front.
 * Return: always zero.
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar(10);

	return (0);
}
