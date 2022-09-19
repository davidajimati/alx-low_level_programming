#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - prints the length of a string
 *
 * @s: string to be considered
 * Return: Defined in the main function
 */

int _strlen(char *s)
{
	int len;

	len = strlen(s);
	_putchar(len);
}
