#include "function_pointers.h"

/**
 * print_name - prints a name with a given function
 * @name: the name to print
 * @f: pointer to the function to use to print the name
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
