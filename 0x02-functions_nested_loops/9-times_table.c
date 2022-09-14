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
	for (i = 0; i <= 18; i += 2)
	{
		l_3 = i + '0';
		_putchar(l_3);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar('\n');
	for (i = 0; i <= 27; i += 3)
	{
		l_4 = i + '0';
		_putchar(l_4);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar('\n');

	for (i = 0; i <= 36; i += 4)
	{
		l_5 = i + '0';
		_putchar(l_5);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar('\n');

	for (i = 0; i <= 45; i += 5)
	{
		l_6 = i + '0';
		_putchar(l_6);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar('\n');

	for (i = 0; i <= 54; i += 6)
	{
		l_7 = i + '0';
		_putchar(l_7);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar('\n');

	for (i = 0; i <= 63; i += 7)
	{
		l_8 = i + '0';
		_putchar(l_8);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar('\n');

	for (i = 0; i <= 72; i += 8)
	{
		l_9 = i + '0';
		_putchar(l_9);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar('\n');

	for (i = 0; i <= 81; i += 9)
	{
		l_10 = i + '0';
		_putchar(l_10);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar('\n');
}
