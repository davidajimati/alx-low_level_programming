#include "main.h"
#include <stdio.h>

/**
 * mul - function to multiply 2 integers
 *
 * @a: integer a
 * @b: integer b
 * Return: Always 0
 */
int mul(int a, int b)
{
	char result;

	result = ((a * b) + '0');
	_putchar(result);
	_putchar('\n');
	return (0);
}
