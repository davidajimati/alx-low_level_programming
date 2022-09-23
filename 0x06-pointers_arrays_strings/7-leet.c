#include "main.h"

/**
 * *leet - encodes a string into a leet
 *
 * @c: character to be swapped
 * Return: c
 */

char *leet(char *c)
{
	int i, a;
	char arr[] = "aeotl";
	char swap[] = {52, 51, 48, 55, 49};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (a = 0; a < 5; a++)
		{
			if (c[i] == arr[a] || c[i] == (arr[a] - 32))
			{
				c[i] = swap[a];
			}
		}
	}
	return (c);
}
