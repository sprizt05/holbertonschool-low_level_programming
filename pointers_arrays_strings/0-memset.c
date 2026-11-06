#include "main.h"

/**
 * _memset - Takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * @n: The pointer to an integer
 * @b: byte to write
 * @s: address of byte to write
 *
 * Return: edited memory address
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (int)n; i++)
	{
		s[i] = b;
	}

	return (s);
}
