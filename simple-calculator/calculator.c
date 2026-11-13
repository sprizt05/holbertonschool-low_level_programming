#include <stdio.h>
#include <stdio.h>

/**
 * main - Entry point for the simple calculator
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

		if (scanf("%d", &choice) != 1)
			break;

		if (choice == 0)
		{
			printf("Bye!\n");
		}
		else if (choice >= 1 && choice <= 4)
		{
			/* Les opérations seront implémentées dans les prochaines étapes */
		}
		else
		{
			printf("Invalid choice\n");
		}
	} while (choice != 0);

	return (0);
}
