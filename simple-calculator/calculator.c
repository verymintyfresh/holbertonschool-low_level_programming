#include "calculator.h"
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
	if (choice == 1)
	{
		printf("Result: %d\n", add());
		printf("\n");
		display_menu();
		return;
	}
	else if (choice == 2)
	{
		printf("Result: %d\n", sub());
		printf("\n");
		display_menu();
		return;
	}
	else if (choice == 3)
	{
		printf("Result: %d\n", mul());
		printf("\n");
		display_menu();
		return;
	}
	/*  if (choice < 1 || choice > 4) -- for later */
	printf("Invalid choice\n");
	choice = choice + 1; /* for compilation reasons, this does nothing */
}

/**
 * add - Prompts the user for two numbers A and B, then adds them together
 * Return: A + B
 */
int add(void)
{
	int a;
	int b;

	printf("A: ");
	if (!scanf("%d", &a))
		scanf("%*[^0-9]%d", &a);
	printf("B: ");
	if (!scanf("%d", &b))
		scanf("%*[^0-9]%d", &b);
	return (a + b);
}

/**
 * sub - Prompts the user for two numbers A and B, then subtracts B from A
 * Return: A - B
 */
int sub(void)
{
	int a;
	int b;

	printf("A: ");
	if (!scanf("%d", &a))
		scanf("%*[^0-9]%d", &a);
	printf("B: ");
	if (!scanf("%d", &b))
		scanf("%*[^0-9]%d", &b);
	return (a - b);
}

/**
 * mul - Prompts the user for two numbers A and B, then multiplies them
 * Return: A * B
 */
int mul(void)
{
	int a;
	int b;

	printf("A: ");
	if (!scanf("%d", &a))
		scanf("%*[^0-9]%d", &a);
	printf("B: ");
	if (!scanf("%d", &b))
		scanf("%*[^0-9]%d", &b);
	return (a * b);
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
