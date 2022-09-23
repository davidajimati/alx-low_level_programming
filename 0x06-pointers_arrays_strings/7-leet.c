#include "main.h"

/**
* leet - Encodes a string into 1337
* @s: String
*
* Return: encoded string
*/

char *leet(char *s)
{
	int i, j;
	char sub[] = "AEOTL";
	char rep[] = {52, 51, 48, 55, 49};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; sub[j] != '\0'; j++)
		{
			if (s[i] == sub[j] || s[i] == (sub[j] + 32))
			{
				s[i] = rep[j];
			}
		}
	}

	return (s);
}
