#include "main.h"
#include <stdio.h>

/**
* puts2 - Prints every other character of a string
* @str: String
*
* Return: void
*/

void puts2(char *str)
{
	int cot = 0;
	int x = 0;

	while (str[cot] != '\0')
		cot++;

	while (x < cot)
	{
		_putchar(str[x]);
		x += 2;
	}

	_putchar('\n');
}
