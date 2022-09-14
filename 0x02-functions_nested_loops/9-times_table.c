#include "main.h"

/**
 * times_table - function to print time table from 0 to 9
 *
 * Return: Void for this funtion
 */
void times_table(void)
{
	int i;
	int a = 0;
	char char_a;
	char l_3, l_4, l_5, l_6, l_7, l_8, l_9, l_10;

	for (i = 1; i <= 10; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar('\n');

	while (a < 10)
	{
		char_a = a + '0';
		_putchar(char_a);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		a++;
	}
	_putchar('\n');

	while (a < 18)
	{
		l_3 = a + '0';
		_putchar((int)l_3);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		i += 2;
	}
	_putchar('\n');

	while (a < 27)
	{
		l_4 = a + '0';
		_putchar(l_4);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		a += 3;
	}
	_putchar('\n');

	while (a < 36)
	{
		l_5 = a + '0';
		_putchar((int)l_5);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar('\n');

	while (a < 45)
	{
		l_6 = a + '0';
		_putchar(l_6);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		a += 5;
	}
	_putchar('\n');

	while (a < 54)
	{
		l_7 = a + '0';
		_putchar(l_7);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		a += 6;
	}
	_putchar('\n');

	while (a < 63)
	{
		l_8 = a + '0';
		_putchar(l_8);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		a += 7;
	}
	_putchar('\n');

	while (a < 72)
	{
		l_9 = a + '0';
		_putchar(l_9);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		a += 8;
	}
	_putchar('\n');

	while (a < 81)
	{
		l_10 = a + '0';
		_putchar(l_10);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		a += 9;
	}
	_putchar('\n');
}
