#include "main.h"
#include <stdio.h>

/**
 * print_square - main function
 *
 * @size: determines the size of square
 * Return: Void in the function
 */
void print_square(int size)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar(35);
			for (y = 1; y < x; y++)
			{
				_putchar(35);
			}
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
