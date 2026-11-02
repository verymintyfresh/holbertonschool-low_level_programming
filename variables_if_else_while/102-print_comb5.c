#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 * Return: always zero (success)
 */
int main(void)
{
	int i;
	int j;
	int comma = 44;
	int space = 32;
	int newline = 10;
	int digit_zero = 48;

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			putchar(i / 10 + digit_zero); /* first digit */
			putchar(i % 10 + digit_zero); /* last digit */
			putchar(space);
			putchar(j / 10 + digit_zero); /* first digit */
			putchar(j % 10 + digit_zero); /* last digit */
			j++;
			if (i != 98 || j != 100)
			{
				putchar(comma);
				putchar(space);
			}
		}
		i++;
	}
	putchar(newline);

	return (0);
}
