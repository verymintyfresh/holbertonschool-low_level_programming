#include <stdio.h>

/**
 * main - prints every combination of single-digit numbers
 * Return: always zero
 */
int main(void)
{
	int i;
	int j;
	int comma = 44;
	int space = 32;
	int newline = 10;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56 || j != 57)
			{
				putchar(comma);
				putchar(space);
			}
		}
	}
	putchar(newline);

	return (0);
}
