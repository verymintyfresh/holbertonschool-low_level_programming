#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase without q or e
 * Return: always zero
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		if (i != 113 && i != 101)
			putchar(i);
	putchar(10);
	return (0);
}
