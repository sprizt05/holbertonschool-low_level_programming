#include <stdio.h>
#include "main.h"

/**
 * puts_half - check the code
 * @str: char
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
		i++;
	i--;

	for (j = (i / 2) + 1; j <= i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
