#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints from 0 to 14
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int a, i;

	for (a = 0; a < 10; a++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10) + '0';
			}
			_putchar(i % 10) + '0';
		}
		_putchar('\n');
	}
}
