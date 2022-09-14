#include "main.h"

/**
 * jack_bauer - function to print all the minutes in a 24 hours
 *
 * Return: its's a void function, the return is invoked in the main file
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_remain;
	int mins_remain;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			mins_remain = minutes % 10;
			hours_remain = hours % 10;
			_putchar(hours / 10 + '0');
			_putchar(hours_remain + '0');
			_putchar(':');
			_putchar(mins / 10 + '0');
			_putchar(mins_remain + '0');
			_putchar('\n');
			minutes++;
		}
		hours++;
	}
}
