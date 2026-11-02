#include <stdio.h>

/**
 * main - prints every combination of triple-digit numbers
 * Return: always zero
 */
int main(void)
{
	int i;
	int j;
	int k;
	int comma = 44;
	int space = 32;
	int newline = 10;

	for (i = 48; i <= 55; i++)
	{
		for (j = i + 1; j <= 56; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55 || j != 56 || k != 57)
				{
					putchar(comma);
					putchar(space);
				}
			}
		}
	}
	putchar(newline);

	return (0);
}
