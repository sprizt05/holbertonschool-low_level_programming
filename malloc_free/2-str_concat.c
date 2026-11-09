#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to the newly allocated space containing s1 followed by s2,
 * or NULL on failure. If NULL is passed, treat it as an empty string.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0, k = 0;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}

	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		for (i = 0; i < len1; i++)
		{
			concat[k] = s1[i];
			k++;
		}
	}

	if (s2 != NULL)
	{
		for (j = 0; j < len2; j++)
		{
			concat[k] = s2[j];
			k++;
		}
	}

	concat[k] = '\0';

	return (concat);
}
