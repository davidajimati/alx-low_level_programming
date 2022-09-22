#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - compares two strings
 *
 * @s1: string 1
 * @s2: string 2
 * Return: integer type
 */

int _strcmp(char *s1, char *s2)
{
	int diff, i;

	diff = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
			if (s2[i] != '\0')
			{
				diff = s1[i] - s2[i];
				break;
			}
	}
	
	return (diff);
}
