#include <stdio.h>

/**
 * main - Entry point for the simple calculator
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice, a, b;

	printf("Simple Calculator\n");
	do {
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice: ");

		if (scanf("%d", &choice) != 1)
			break;

		if (choice == 1)
		{
			printf("A: ");
			if (scanf("%d", &a) != 1)
				break;
			printf("B: ");
			if (scanf("%d", &b) != 1)
				break;
			printf("Result: %d\n", a + b);
		}
		else if (choice == 2)
		{
			printf("A: ");
			if (scanf("%d", &a) != 1)
				break;
			printf("B: ");
			if (scanf("%d", &b) != 1)
				break;
			printf("Result: %d\n", a - b);
		}
		else if (choice == 3)
		{
			printf("A: ");
			if (scanf("%d", &a) != 1)
				break;
			printf("B: ");
			if (scanf("%d", &b) != 1)
				break;
			printf("Result: %d\n", a * b);
		}
		else if (choice == 0)
		{
			printf("Bye!\n");
		}
		else if (choice == 4)
		{
			/* La division sera ajoutée à l'étape suivante */
		}
		else
		{
			printf("Invalid choice\n");
		}
	} while (choice != 0);

	return (0);
}
