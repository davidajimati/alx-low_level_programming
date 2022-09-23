#include "main.h"

/**
 * print_number - prints out an integer using putchar
 *
 * @n: integer to be printed
 * Return: nothing -  void function
 */

void print_number(int n)
{
	if (n < 0)
		_putchar('-');

	if (n > 9)
	{
		_putchar(n / 10);
		_putchar((n % 10) + '0');
	}
}
