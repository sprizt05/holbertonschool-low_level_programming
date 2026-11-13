#include <stdio.h>

/**
 * main - Entry point of the simple calculator program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice;

	printf("Simple Calculator\n");

	do {
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice: ");

		if (scanf("%d", &choice) != 1) {
			printf("Invalid input.\n");
			break;
		}

		if (choice == 0) {
			printf("Bye!\n");
		}

	} while (choice != 0);

	return (0);
}
