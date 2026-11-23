#include <stdio.h>

/**
 * main - entry point of the program
 * @argc: the number of arguments
 * @argv: list of arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
