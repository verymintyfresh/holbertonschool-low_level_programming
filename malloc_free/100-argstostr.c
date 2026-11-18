#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates arguments with new lines
 * @ac: the number of arguments
 * @av: the arguments
 * Return: the concatenation of the arguments
 */
char *argstostr(int ac, char **av)
{
	char *concat, *ptr, *tmp;
	size_t size;
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;
	i = 0;
	while (i < ac)
	{
		tmp = av[i];
		while (*tmp != '\0')
		{
			tmp++;
			size++;
		}
		size++;		/* space for \n */
		i++;
	}
	concat = malloc(size + 1);
	if (concat == NULL)
		return (NULL);
	ptr = concat;
	i = 0;
	while (i < ac)
	{
		tmp = av[i];
		while (*tmp != '\0')
		{
			*concat = *tmp;
			tmp++;
			concat++;
		}
		*concat = '\n';
		concat++;
		i++;
	}
	concat = '\0';
	return (ptr);
}
