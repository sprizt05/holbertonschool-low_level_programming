#include <stdio.h>
#include "main.h"

/**
 * rev_string - check the code
 * @s: char
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i;
	int j;
	char temp;

	i = 0;
	while (s[i])
		i++;
	i--;

	j = 0;
	while (j <= i / 2)
	{
		temp = s[j];
		s[j] = s[i - j];
		s[i - j++] = temp;
	}
}
