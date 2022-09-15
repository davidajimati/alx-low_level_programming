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
	char ans;

	for (i = 0; i <= 14; i++)
	{
		ans = i + '0';
		_putchar(ans)
	}
	_putchar('\n');
