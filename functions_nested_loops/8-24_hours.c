#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - Short description, single line
 * 
 * Return: Description of the returned value
 */
int main(void)
{
	int h1;
	int h2;
	int m1;
	int m2;

	while (h1 + h2 + m1 + m2 != 19)
	{
		printf("%d%d:%d%d\n", h1, h2, m1, m2);
		m2++;
		if (m2 == 9)
		{
			m2 = 0;
			m1++;
		}
		else if (m1 == 5)
		{
			m1 = 0;
			h2++;
		}
		else if (h2 == 9)
		{
			h2 = 0;
			h1++;
		}
	}
	return 0;
}
