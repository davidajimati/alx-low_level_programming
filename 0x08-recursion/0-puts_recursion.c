#include "main.h"
#include <stdio.h>

/**
* _puts_recursion - prints a string to stdout followed by a new line
*
* @s: string
* Return: Nothing
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);	
	if (*(s + 1) == '\0')
	_putchar('\n');
}
