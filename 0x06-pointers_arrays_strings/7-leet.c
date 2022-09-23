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
	char arr[] = "AEOTL";
	int swap[] = {4, 3, 0, 7, 1};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (a = 0; arr[a] != '\0'; a++)
		{
			if (c[i] == arr[a] || c[i] == arr[a] + 32)
			{
				c[i] = swap[a];
			}
		}
	}
	return (c);
}
