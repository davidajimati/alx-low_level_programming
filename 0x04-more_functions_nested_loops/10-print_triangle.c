#include <stdio.h>
#include "main.h"

/**
 * print_triangle - main function
 *
 * @size: Size of triangle
 * Return: Void funtioni
 */
void print_triangle(int size)
{
	int x, y, space;

	space = size - 1;
	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (x = (size - 1); x > 0; x--)
				_putchar(32);
			for (x = (space + 0); x <= size; x++)
				_putchar(35);
		}
	_putchar('\n');
	}
	else
		_putchar('\n');
}
