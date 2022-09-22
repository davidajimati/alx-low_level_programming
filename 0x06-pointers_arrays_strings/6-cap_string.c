#include "main.h"

/**
 * *cap_string - changes lower to uppercase
 * @c: char variable
 * Return: c
 */

char *cap_string(char *c)
{
	int i;

	if (c[0] >= 97 && c[0] <= 122)
		c[0] -= 32;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == 32 || c[i]  == 9 || c[i] == 10 || c[i] == 44 || c[i] == 59)
		{
			if (c[i + 1] >= 97 && c[i + 1] <= 122)
			{
				c[i + 1] -= 32;
			}
		}

		if (c[i] == 46 || c[i] == 33 || c[i] == 63 || c[i] == 34 || c[i] == 40)
		{
			if (c[i + 1] >= 97 && c[i + 1] <= 122)
			{
				c[i + 1] -= 32;
			}
		}

		if (c[i] == 41 || c[i] == 123 || c[i] == 124)
		{
			if (c[i + 1] >= 97 && c[i + 1] <= 122)
			{
				c[i + 1] -= 32;
			}
		}
	}

	return (c);
}
