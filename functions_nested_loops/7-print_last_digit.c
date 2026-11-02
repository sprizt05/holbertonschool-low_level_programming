#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Short description, single line
 * @i: number
 * Return: Description of the returned value
 */
int print_last_digit(int i)
{
	int last;

	if (i < 0)
		last = -(i) % 10;
	else
		last = i % 10;
	_putchar('0' + last);
	return (last);
}

