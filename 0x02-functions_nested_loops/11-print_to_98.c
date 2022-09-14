#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - Mian function; prints from any number to 98
 *
 * @n: the integer passed into function
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
		_putchar('\n');
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
		_putchar('\n');
	}
}

