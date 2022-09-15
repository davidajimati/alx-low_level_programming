#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints from 0 to 14
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int i;
	int a = 1;
	char ans;

	while (a <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			ans = i + '0';
			_putchar(ans);
		}
		_putchar('\n');
		a++;
	}
}
