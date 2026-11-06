#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: The string to encode
 *
 * Return: A pointer to the resulting string
 */
char *leet(char *s)
{
	int i = 0, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
			}
			j++;
		}
		i++;
	}

	return (s);
}
