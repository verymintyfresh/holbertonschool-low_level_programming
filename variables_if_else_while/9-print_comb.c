#include <stdio.h>

/**
 * main - prints every combination of single-digit numbers
 * Return: always zero
 */
int main(void)
{
	int i;
	int comma = 44;
	int space = 32;
	int newline = 10;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(comma);
			putchar(space);
		}
	}
	putchar(newline);

	return (0);
}
