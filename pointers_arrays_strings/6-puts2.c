#include <stdio.h>
#include "main.h"

/**
 * puts2 - check the code
 * @str: char
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
		i++;
	i--;

	for (j = 0; j <= i; j += 2)
		_putchar(str[j]);
	_putchar('\n');
}
