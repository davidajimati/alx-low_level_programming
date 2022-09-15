#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - main function
 *
 * @n: determinant variable
 * Return: Void in this function
 */
void print_diagonal(int n)
{
	int i;
	char chr = ' ';
	char slash = '92';

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			while (i > 1)
			{
				_putchar(chr);
				i--;
			}
			_putchar(slash);
		}
		_putchar('\n');
	}
}
