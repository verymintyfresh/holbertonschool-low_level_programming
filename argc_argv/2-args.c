#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of arguments
 * @argv: The list of arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
