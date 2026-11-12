#include "calculator.h"
#include "operations.h"
#include "operations.c"
#include <stdio.h>

/**
 * display_menu - displays a menu and list of choices
 * Return: nothing.
 */
void display_menu(void)
{
	printf("Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
}

/**
 * run_choice - determines which function to run
 * @choice: an unsigned int representing a user's choice
 * Return: nothing.
 */
void run_choice(unsigned int choice)
{
	int a;
	int b;

	if (choice == 1)
	{
		while (!get_input(&a, &b))
			get_input(&a, &b);
		printf("Result: %d\n", add(a, b));
	}
	else if (choice == 2)
	{
		while (!get_input(&a, &b))
			get_input(&a, &b);
		printf("Result: %d\n", sub(a, b));
	}
	else if (choice == 3)
	{
		while (!get_input(&a, &b))
			get_input(&a, &b);
		printf("Result: %d\n", mul(a, b));
	}
	else if (choice == 4)
	{
		while (!get_input(&a, &b))
			get_input(&a, &b);
		if (b == 0)
		{
			printf("Error: division by zero\n");
		}
		else
			printf("Result: %.2f\n", div(a, b));
	}
	else
		printf("Invalid choice\n");
	printf("\n");
	display_menu();
}

/**
 * get_input - asks the user for two numbers and stores them in given variables
 * @a: an integer
 * @b: an integer
 * Return: 1 if both inputs are valid, 0 otherwise
 */
int get_input(int *a, int *b)
{
	int clear;

	printf("A: ");
	if (!scanf("%d%*[^\n]", a))
	{
		clear = getchar();
		while (clear != '\n' && clear != EOF)
			clear = getchar();

		printf("Invalid input. Please input an integer.\n");
		return (0);
	}
	printf("B: ");
	if (!scanf("%d%*[^\n]", b))
	{
		clear = getchar();
		while (clear != '\n' && clear != EOF)
			clear = getchar();

		printf("Invalid input. Please input an integer.\n");
		return (0);
	}
	return (1);
}

/**
 * main - entry point for the program
 * Return: always 0 (success)
 */
int main(void)
{
	unsigned int choice;

	display_menu();
	printf("Choice: ");
	if (!scanf("%u", &choice))
		scanf("%*[^0-9]%u", &choice);
	while (choice != 0)
	{
		run_choice(choice);
		printf("Choice: ");
		if (!scanf("%u", &choice))
			scanf("%*[^0-9]%u", &choice);
	}
	printf("Bye!\n");

	return (0);
}
