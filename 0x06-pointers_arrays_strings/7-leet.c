#include "main.h"

/**
 * *leet - encodes strings
 * @c: string variable
 * Return: c
 */

char *leet(char *c)
{
	int a, b;

	char alt[] = "AEOTL";
	char nat[] = {52, 51, 48, 55, 49};

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; alt[b] != '\0'; b++)
		{
			if (c[a] == alt[b] || c[a] == alt[b] + 32)
			{
				c[a] = nat[b];
			}
		}
	}
	return (0);
}
