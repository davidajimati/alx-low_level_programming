#include "main.h"

/**
 * _puts - prints a string followed by a new line
 *
 * @str: The string to be printed
 * Return: Always 0 - defined in main
 */
void _puts(char *str)
{
	int i;
	int len = 1;

	for (; *str != '\0'; str++)
	{
		len++;
	}
	for (i = 0; i <= len; i++)
	{
		_putchar(str);
	}
	_putchar('\n');
}
