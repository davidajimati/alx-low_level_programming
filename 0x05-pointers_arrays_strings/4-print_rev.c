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
	char i;

	i = '\0';
	while (i > *s)
	{
		_putchar(s);
		i--;
	}
	_putchar('\n');
}
