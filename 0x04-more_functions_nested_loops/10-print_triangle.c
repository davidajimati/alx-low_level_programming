#include "main.h"

/**
 * print_triangle - main function
 *
 * @size: Size of triangle
 * Return: Void funtioni
 */
void print_triangle(int size)
{
	int y, x, z;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (x = size - y; x > 1; x--)
				_putchar(32);
			for (z = 0; z <= y; z++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
