#include <stdio.h>

/**
 * sum_to_n - sums numbers from 1 to n
 * @n: input integer
 * Return: sum of numbers
 */
int sum_to_n(int n)
{
	int i;
	int sum = 0;

	for (i = 1; i <= n; i++)
	{
		sum += i;
	}

	return (sum);
}

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	printf("%d\n", sum_to_n(10));
	return (0);
}
