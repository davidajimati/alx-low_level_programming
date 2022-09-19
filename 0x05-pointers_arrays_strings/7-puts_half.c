#include "main.h"
#include <stdio.h>

/**
* puts_half - Prints half of a string
* @str: String
*
* Return: void
*/

void puts_half(char *str)
{
	int cot;
	int tot = 0;
	int halv;

	while (str[tot] != '\0')
		tot++;

	cot = tot - 1;

	if ((cot % 2) == 0)
	{
		halv = cot / 2;

		for (halv += 1; halv <= cot; halv++)
			_putchar(str[halv]);
	}
	else
	{
		int halv = (cot - 1) / 2;

		for (halv += 1; halv <= cot; halv++)
			_putchar(str[half]);
	}

	_putchar('\n');
}
