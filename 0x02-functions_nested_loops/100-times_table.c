#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_times_table - Main fucntion
 *
 * @n: the integer to analyze
 * Return: Always o (Success)
 */
void print_times_table(int n)
{
	int num, prod, mult;

	if (n == 15 || n == 0)
	{
		break
	}
	else
	{
		for (num = 0; num <= 9; num++)
		{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
		}
	}
}
