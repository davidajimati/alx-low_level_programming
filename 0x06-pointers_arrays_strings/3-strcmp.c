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
	int diff, a, b;

	a = strlen(s1);
	b = strlen(s2);
	diff = a - b;

	return (diff);
}
