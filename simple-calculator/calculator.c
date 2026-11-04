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
		get_input(&a, &b);
		printf("Result: %d\n", add(a, b));
	}
	else if (choice == 2)
	{
		get_input(&a, &b);
		printf("Result: %d\n", sub(a, b));
	}
	else if (choice == 3)
	{
		get_input(&a, &b);
		printf("Result: %d\n", mul(a, b));
	}
	else if (choice == 4)
	{
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
 * Return: nothing
 */
void get_input(int *a, int *b)
{
	printf("A: ");
	if (!scanf("%d", a))
		scanf("%*[^0-9]%d", a);
	printf("B: ");
	if (!scanf("%d", b))
		scanf("%*[^0-9]%d", b);
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
