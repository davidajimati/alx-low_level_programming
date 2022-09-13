#include "main.h"

/**
 * print_sign - function to check integer type
 *
 * @n: the integer to be checked
 * Return: returns 1 if high and 0 if lower than zero respectively
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
	return (1);
	else if (n == 0)
		_putchar('0');
	return (0);
	else
		_putchar('-');
	return (-1);
}
