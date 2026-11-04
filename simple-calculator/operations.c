#include "calculator.h"
#include <stdio.h>

/**
 * add - Prompts the user for two numbers A and B, then adds them together
 * @a: an integer
 * @b: an integer
 * Return: A + B
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Prompts the user for two numbers A and B, then subtracts B from A
 * @a: an integer
 * @b: an integer
 * Return: A - B
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Prompts the user for two numbers A and B, then multiplies them
 * @a: an integer
 * @b: an integer
 * Return: A * B
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Prompts the user for two numbers A and B, then divides A by B
 * @a: an integer
 * @b: an integer
 * Return: A / B
 */
float div(int a, int b)
{
	return (a / (b * 1.0f));
}
