#include <stdio.h>

/**
 * print_table - prints a table of products
 * @size: size of the table
 */
void print_table(int size)
{
	int row, col;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
		{
			printf("%d", row * col);
			if (col < size)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	print_table(3);
	return (0);
}
