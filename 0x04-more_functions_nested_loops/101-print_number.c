#include "main.h"

/**
 * print_number - main function
 *
 * @n: variable in question
 * Return: void in this function
 */
void print_number(int n)
{
	if (n > 9)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar('\n');
	}
	else if (n <= -10)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar('\n');
	else
		_putchar(n);
	_putchar('\n');
}
