#include "main.h"

/**
 * print_number - prints out an integer using putchar
 *
 * @n: integer to be printed
 * Return: nothing -  void function
 */
void print_number(int n)
{
	unsigned int tens, number, pos = n;
	double t = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			pos = n * -1;
			_putchar('-');
		}

		while (t <= pos)
			t *= 10;
		tens = t / 10;

		while (tens >= 1)
		{
			number = pos / tens;
			_putchar(number + '0');
			pos = (pos - (tens * number));
			tens /= 10;
		}
	}
}
