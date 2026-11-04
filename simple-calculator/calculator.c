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
	choice = choice + 1; /* does nothing right now */
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
	scanf("%u", &choice);
	while (choice != 0)
	{
		run_choice(choice);
	}
	printf("Bye!\n");

	return (0);
}
