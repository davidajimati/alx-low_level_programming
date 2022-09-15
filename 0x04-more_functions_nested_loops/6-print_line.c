#include "main.h"
#include <stdio.h>

/**
 * print_line - main function; prints underscores
 *
 * Return: Void
 */
void print_line(int n)
{
	int i;
	char chr = '_';

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar(chr);
	}
	_putchar('\n');
}
