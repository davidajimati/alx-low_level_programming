#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - prints the length of a string
 *
 * @s: string to be considered
 * Return: Returns length of string
 */

int _strlen(char *s)
{
	int len;

	while ( s < '\0')
	{
		len++;
		s++;
	}
	return (len);
}
