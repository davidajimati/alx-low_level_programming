#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefux substring
 *
 *  @s: string to be examined
 *  @accept: String contents to be searched for
 *  Return: Unsigned int containing the result
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s[i]);
			}
		}
	}
	return ('\0');
}
