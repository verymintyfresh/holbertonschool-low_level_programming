#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of arguments
 * @argv: The list of arguments
 * Return: 0 (success), 1 (error)
 */
int main(int argc, char *argv[])
{
	int cents;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}
	i = 0;
	while (cents >= 25)
	{
		cents -= 25;
		i++;
	}
	while (cents >= 10)
	{
		cents -= 10;
		i++;
	}
	while (cents >= 5)
	{
		cents -= 5;
		i++;
	}
	while (cents >= 2)
	{
		cents -= 2;
		i++;
	}
	i += cents; /* either 0 or 1 left */
	printf("%d\n", i);
	return (0);
}
