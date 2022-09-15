#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - main function
 *
 * @void: void function
 * Return: Void in this function
 */
void print_most_numbers(void)
{
	int i;
	char ans;

	for (i = 0; i <= 9; i++)
	{
		ans = i + '0';
		if (i != 2 || i != 4)
			_putchar(ans);
		_putchar('\n');
	}
}
