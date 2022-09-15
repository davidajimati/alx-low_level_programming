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
	int answer;
	char result;

	answer = a * b;
	result = answer + '0';
	_putchar(result);
	_putchar('\n');
	return (0);
}
