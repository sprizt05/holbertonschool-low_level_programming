#include <stdio.h>
#include "main.h"

/**
 * _atoi - check the code
 * @s: * char
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int i;
	int signe;
	int nbr_final;

	i = 0;
	signe = 1;
	nbr_final = 0;
	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			signe *= -1;
		i++;
	}
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		nbr_final *= 10;
		if (signe == 1)
			nbr_final += s[i] - '0';
		else
			nbr_final -= s[i] - '0';
		i++;
	}
	return (nbr_final);
}
