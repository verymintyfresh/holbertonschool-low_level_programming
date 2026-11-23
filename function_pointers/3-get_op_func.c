#include "3-calc.h"
#include <stddef.h>
#include <string.h>

/**
 * get_op_func - returns a function based on user input
 * @s: the string to search for
 * Return: pointer to a function matching s
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (!strcmp(s, ops[i].op))
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL); /* this should never happen */
}
