#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of arguments
 * @argv: The list of arguments
 * Return: 0 (success), 1 (error)
 */
int main(int argc, char *argv[])
{
	int sum;
	int i;
	int next;
	char *endptr;

	i = 1;
	sum = 0;
	while (i < argc)
	{
		endptr = NULL;
		next = strtol(argv[i], &endptr, 10);
		if (*endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
		sum += next;
		i++;
	}

	printf("%d\n", sum);
	return (0);
}
