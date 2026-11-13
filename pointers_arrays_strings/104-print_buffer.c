#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_buffer - prints the contents of a buffer in multiple formats
 * @b: the buffer
 * @size: the size of the buffer
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int i;
	char bytes[10];
	int byte;

	i = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (i < size)
	{
		if (i % 10 == 0)	/* new line */
		{
			printf("%08x:", i);
			memcpy(bytes, b + i, 10);
		}
		byte = 0;
		if (i + 10 < size)
		{
			while (byte < 10) /* don't read too much */
			{
				if (byte % 2 == 0)
					printf(" ");
				printf("%02x", bytes[byte]);
				byte++;
				i++;
			}
		}
		else
		{
			print_last(bytes, size - i);
			print_bytes(bytes, size - i);
			return;
		}
		print_bytes(bytes, 10);
	}
}

/**
 * print_bytes - prints bytes in a human-readable format
 * @b: the buffer
 * @size: the number of bytes to print
 * Return: nothing
 */
void print_bytes(char *b, int size)
{
	int i;

	i = 0;
	printf(" ");	/* add a space */
	while (i < size)
	{
		if (b[i] >= 32 && b[i] <= 126) /* printable ASCII */
			printf("%c", b[i]);
		else
			printf(".");
		i++;
	}
	printf("\n");
}

/**
 * print_last - prints the final line of output
 * @b: the buffer
 * @n: the number of bytes remaining in the buffer
 * Return: nothing
 */
void print_last(char *b, int n)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i % 2 == 0)
			printf(" ");
		if (i < n)
			printf("%02x", b[i]);
		else
			printf("  ");
		i++;
	}
}
