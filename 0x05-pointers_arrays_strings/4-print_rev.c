#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints reverse of a string
 *
 * @s: string variable
 * Return: defined in main function
 */
void print_rev(char *s)
{
	for (; *s < '\0'; '\0'--)
	{
		_putchar(s);
	}
	_putchar('\n');
}
