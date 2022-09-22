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
	int a;

	a = strcmp(s1, s2);
	if (a < 0)
	{
		return (-15);
	}
	else if (a > 0)
	{
		return (15);
	}
	else
		return (0);
}
