#include "main.h"

/**
 * times_table -  funtion that prints the time table of number between 0 and 9
 *
 * Return: It's a void function here.No return
 */
void times_table(void)
{
	int number, multiple, product;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');
		for (multiple = 0; multiple <= 9; multiple++)
		{
			_putchar(',');
			_putchar(' ');
			product = number * product;
			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
