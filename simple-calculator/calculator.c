#include <stdio.h>

/**
 * main - Simple calculator entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice, a, b;

	printf("Simple Calculator\n");
	do {
		printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\nChoice: ");
		if (scanf("%d", &choice) != 1)
			break;

		if (choice >= 1 && choice <= 4)
		{
			printf("Enter two integers: ");
			if (scanf("%d %d", &a, &b) != 2)
				break;

			switch (choice)
			{
			case 1: printf("Result: %d\n", a + b); break;
			case 2: printf("Result: %d\n", a - b); break;
			case 3: printf("Result: %d\n", a * b); break;
			case 4:
				if (b == 0)
					printf("Error: Division by zero\n");
				else
					printf("Result: %d\n", a / b);
				break;
			}
		}
		else if (choice == 0)
		{
			printf("Bye!\n");
		}
	} while (choice != 0);

	return (0);
}
