#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point of the program
 * @argc: the number of arguments to the program
 * @argv: array of arguments to the program
 * Return: 0 (success) or 98, 99, 100 (errors)
 *
 * Error 98: wrong number of arguments
 * Error 99: wrong operator
 * Error 100: division by 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	s = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(s) == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((!strcmp(s, "/") || !strcmp(s, "%")) && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", get_op_func(s)(a, b));
	return (0);
}
