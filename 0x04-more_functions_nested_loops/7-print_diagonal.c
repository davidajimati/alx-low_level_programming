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
	int i, x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (x = 0; x < i; x++)
			{
				_putchar(' ');
			}
			_putchar(92);
		}
		_putchar('\n');
	}
}
