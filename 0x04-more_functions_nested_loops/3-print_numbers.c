#include "main.h"
#include <stdio.h>

/**
 * print_numbers - main function: prints numbers from 0 to 9
 *
 * Return: Void here, no return
 */
void print_numbers(void)
{
	int n;
	char ans;

	for (n = 0; n <= 9; n++)
	{
		ans = n + '0';
		_putchar(ans);
		_putchar('\n');
	}
}
